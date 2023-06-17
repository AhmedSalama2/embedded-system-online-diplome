/***
 ======================================================================================================================
 ** Created on     : Mon, May 1, 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : LIFO_BUFFER
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
#include "stdint.h"
#include "stdio.h"

#ifndef LIFO_BUFFER_H_
#define LIFO_BUFFER_H_

/*User Configuration===============
 Please choose type of Element
 from (uint8_t,uint16_t,unint32_t,......}
 */
#define ELEMNT_TYPE     uint32_t
/**
 * This is a LIFO (Last In First Out) buffer.
 *
 * The buffer is initialized with a length and a pointer to an array of elements.
 * The buffer can be checked for emptiness or fullness.
 * Elements can be pushed onto the buffer or popped off the buffer.
 * The top element of the buffer can be retrieved without popping it off.
 */

typedef struct {
	unsigned int counter; /* The number of elements in the buffer.*/
	unsigned int lenght; /* The maximum length of the buffer.*/
	ELEMNT_TYPE *Base; /* The pointer to the start of the buffer array.*/
	ELEMNT_TYPE *head; /* The pointer to the first element in the buffer.*/
} Lifo_Buffer_t;

/**
 * The possible status codes returned by the LIFO buffer functions.
 */
typedef enum {
	LIFO_no_error, /* No error occurred.*/
	LIFO_full, /* The buffer is full.*/
	LIFO_not_empty, /* The buffer is not empty.*/
	LIFO_empty, /* The buffer is empty.*/
	LIFO_NuLL, /* The buffer pointer is NULL.*/
	LIFO_not_full, /* The buffer is not full.*/
} buffer_status;

/**
 * Initializes the buffer.
 *
 * @param LIFO The pointer to the buffer.
 * @param length The maximum length of the buffer.
 * @param item_buf The pointer to the array of elements.
 *
 * @return The status code.
 */
buffer_status LIFO_BUFFER_INIT(Lifo_Buffer_t *LIFO, uint32_t length,
ELEMNT_TYPE *item_buf);

/**
 * Checks if the buffer is full.
 *
 * @param LIFO The pointer to the buffer.
 *
 * @return The status code.
 */
buffer_status LIFO_BUFFER_ISFULL(Lifo_Buffer_t *LIFO);

/**
 * Checks if the buffer is empty.
 *
 * @param LIFO The pointer to the buffer.
 *
 * @return The status code.
 */
buffer_status LIFO_BUFFER_ISEMPTY(Lifo_Buffer_t *LIFO);

/**
 * Pushes an element onto the buffer.
 *
 * @param LIFO The pointer to the buffer.
 * @param item The element to push.
 *
 * @return The status code.
 */
buffer_status LIFO_BUFFER_PUSH(Lifo_Buffer_t *LIFO, ELEMNT_TYPE item);

/**
 * Pops an element off the buffer.
 *
 * @param LIFO The pointer to the buffer.
 * @param item The pointer to the element to pop.
 *
 * @return The status code.
 */
buffer_status LIFO_BUFFER_POP(Lifo_Buffer_t *LIFO, ELEMNT_TYPE *item);

/**
 * Gets the top element of the buffer without popping it off.
 *
 * @param LIFO The pointer to the buffer.
 * @param item The pointer to the element.
 *
 * @return The status code.
 */
buffer_status LIFO_BUFFER_TOP(Lifo_Buffer_t *LIFO, ELEMNT_TYPE *item);
/**
 * This function prints the contents of the LIFO buffer to stdout.
 *
 * @param LIFO The pointer to the LIFO buffer.
 *
 * @return The status of the operation.
 *   - LIFO_no_error: The operation was successful.
 *   - LIFO_NuLL: The buffer pointer is NULL.
 */
buffer_status LIFO_BUFFER_PRINT(Lifo_Buffer_t *LIFO);

#endif /* LIFO_BUFFER_H_ */
