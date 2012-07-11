/**
 * @file queue.h
 * @author Ruei-Yuan Lu (RueiYuan.Lu@gmail.com)
 * @brief Ring queue implementation
 */

#ifndef QUEUE_H_
#define QUEUE_H_

typedef struct queue* queue;

/**
 * @brief Create a new queue object.
 * @param buffer_size Buffer size
 * @param queue_size Maximum number of buffers
 * @retval Initialized queue object
 */
queue queue_new(int buffer_size, int queue_size);

/**
 * @brief Delete a queue object.
 */
void queue_delete(queue* q);

/**
 * @brief Push data into a queue.
 * @param q Target queue object
 * @param data Pointer to data
 */
void queue_push(queue q, unsigned char* data);

/**
 * @brief Pop data from a queue.
 * @retval Pointer to popped data
 */
unsigned char* queue_pop(queue q);



#endif /* QUEUE_H_ */
