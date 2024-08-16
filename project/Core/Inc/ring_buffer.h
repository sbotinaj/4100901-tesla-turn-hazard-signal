/*
 * ring_buffer.h
 *
 *  Created on: Aug 15, 2024
 *      Author: 57316
 */

#ifndef SRC_RING_BUFFER_H_
#define SRC_RING_BUFFER_H_

// Create a ring buffer structure
typedef struct {
    uint8_t *buffer; // Pointer to the data buffer
    uint16_t head; // Index of the head
    uint16_t tail; // Index of the tail
    uint16_t capacity; // Capacity of the buffer
    uint8_t is_full; // Flag to indicate if the buffer is full
} RingBuffer;

// Initialize the ring buffer
void ring_buffer_init(RingBuffer *rb, uint8_t *buffer, uint16_t capacity); 
// Check if the ring buffer is full
void ring_buffer_put(RingBuffer *rb, uint8_t data);
// Put a byte into the ring buffer
uint8_t ring_buffer_get(RingBuffer *rb);

#endif /* SRC_RING_BUFFER_H_ */
