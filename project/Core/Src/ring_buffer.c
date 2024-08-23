/*
 * ring_buffer.c
 *
 *  Created on: Aug 15, 2024
 *      Author: 57316
 */

#include "ring_buffer.h"

void ring_buffer_init(RingBuffer *rb, uint8_t *buffer, uint16_t capacity) {
    rb->buffer = buffer;
    rb->capacity = capacity;
    rb->head = 0;
    rb->tail = 0;
    rb->is_full = 0;
}

void ring_buffer_put(RingBuffer *rb, uint8_t data) {
    rb->buffer[rb->head] = data;
    rb->head = (rb->head + 1) % rb->capacity;
    if (rb->is_full) {
        rb->tail = (rb->tail + 1) % rb->capacity;
    }
    rb->is_full = (rb->head == rb->tail);
}

uint8_t ring_buffer_get(RingBuffer *rb) {
    if (rb->head == rb->tail && !rb->is_full) {
        // Buffer is empty
        return 0;
    }
    uint8_t data = rb->buffer[rb->tail];
    rb->tail = (rb->tail + 1) % rb->capacity;
    rb->is_full = 0;
    return data; // Buffer is not empty and data is returned
}

void ring_buffer_reset(RingBuffer *rb) {
    rb->head = 0;
    rb->tail = 0;
    rb->is_full = 0;
}

uint16_t ring_buffer_size(RingBuffer *rb) {
    if (rb->is_full) {
        return rb->capacity;
    }
    if (rb->head >= rb->tail) {
        return rb->head - rb->tail;
    }
    return rb->capacity + rb->head - rb->tail;
}

uint8_t ring_buffer_is_empty(RingBuffer *rb) {
    return (rb->head == rb->tail && !rb->is_full);
}

uint8_t ring_buffer_is_full(RingBuffer *rb) {
    return rb->is_full;
}


