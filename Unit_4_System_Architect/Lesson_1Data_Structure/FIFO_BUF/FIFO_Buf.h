/***
 ======================================================================================================================
 ** Created on     : Sun, May 14, 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : FIFO_Buf
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"

/*
 * FIFO_BUF.h
 *
 * This header file declares the functions and data structures for a
 * simple FIFO buffer.
 */

#ifndef FIFO_BUF_H_
#define FIFO_BUF_H_

/*
 * ELEMENT_TYPE
 *
 * The type of data that is stored in the FIFO buffer.
 */
#define ELEMENT_TYPE uint32_t

/*
 * FIFO_BUF_t
 *
 * A structure that represents a FIFO buffer.
 */
typedef struct {
	/*
	 * Length
	 *
	 * The length of the FIFO buffer.
	 */
	uint32_t lenght;

	/*
	 * head
	 *
	 * A pointer to the head of the FIFO buffer.
	 */
	ELEMENT_TYPE *head;

	/*
	 * base
	 *
	 * A pointer to the base of the FIFO buffer.
	 */
	ELEMENT_TYPE *base;

	/*
	 * tail
	 *
	 * A pointer to the tail of the FIFO buffer.
	 */
	ELEMENT_TYPE *tail;

	/*
	 * count
	 *
	 * The number of elements in the FIFO buffer.
	 */
	uint32_t count;
} FIFO_BUF_t;

/*
 * E_FIFO_Status_t
 *
 * An enumeration that defines the possible status values for FIFO operations.
 */
typedef enum {
	/*
	 * FIFO_no_error
	 *
	 * No error occurred.
	 */
	FIFO_No_Error,

	/*
	 * FIFO_full
	 *
	 The FIFO buffer is full.
	 */
	FIFO_Full,

	/*
	 * FIFO_not_full
	 *
	 The FIFO buffer is not full.
	 */
	FIFO_Not_Full,

	/*
	 * FIFO_not_empty
	 *
	 The FIFO buffer is not empty.
	 */
	FIFO_Not_Empty,

	/*
	 * FIFO_empty
	 *
	 The FIFO buffer is empty.
	 */
	FIFO_Empty,

	/*
	 * FIFO_NuLL
	 *
	 A NULL pointer was passed to a FIFO function.
	 */
	FIFO_NuLL,
} E_FIFO_Status_t;

/*
 * FIFO_BUF_INIT()
 *
 * Initializes a FIFO buffer.
 *
 * Parameters:
 *   FIFO - A pointer to the FIFO buffer to initialize.
 *   Base - A pointer to the base of the FIFO buffer.
 *   Length - The length of the FIFO buffer.
 *
 * Returns:
 *   FIFO_no_error if the FIFO buffer was successfully initialized.
 *   FIFO_NuLL if FIFO is a NULL pointer.
 */
E_FIFO_Status_t FIFO_BUF_INIT(FIFO_BUF_t *Fifo, ELEMENT_TYPE *Base,
		uint32_t lenght);

/*
 * FIFO_BUF_ISFULL()
 *
 * Checks if a FIFO buffer is full.
 *
 * Parameters:
 *   FIFO - A pointer to the FIFO buffer to check.
 *
 * Returns:
 *   FIFO_full if the FIFO buffer is full.
 *   FIFO_not_full if the FIFO buffer is not full.
 *   FIFO_NuLL if FIFO is a NULL pointer.
 */
E_FIFO_Status_t FIFO_BUF_ISFULL(FIFO_BUF_t *Fifo);

/*
 * FIFO_BUF_ISEMPTY()
 *
 * Checks if a FIFO buffer is empty.
 *
 * Parameters:
 *   FIFO - A pointer to the FIFO buffer to check.
 *
 * Returns:
 *   FIFO_empty if the FIFO buffer is empty.
 *   FIFO_not_empty if the FIFO buffer is not empty.
 *   FIFO_NuLL if FIFO is a NULL pointer.
 */
E_FIFO_Status_t FIFO_BUF_ISEMPTY(FIFO_BUF_t *Fifo);

/*
 * FIFO_BUF_ENQUEUE()
 *
 * Enqueues an element into a FIFO buffer.
 *
 * Parameters:
 *   FIFO - A pointer to the FIFO buffer to enqueue the element into.
 *   IN_Data - The element to enqueue.
 *
 * Returns:
 *   FIFO_no_error if the element was successfully enqueued.
 *   FIFO_full if the FIFO buffer is full.
 *   FIFO_NuLL if FIFO is a NULL pointer.
 */
E_FIFO_Status_t FIFO_BUF_ENQUEUE(FIFO_BUF_t *Fifo, ELEMENT_TYPE IN_Data);
/*
 * FIFO_BUF_DEQUEUE()
 *
 * Dequeues an element from a FIFO buffer.
 *
 * Parameters:
 *   FIFO - A pointer to the FIFO buffer to dequeue the element from.
 *   OUT_Data - A pointer to the location where the dequeued element will be stored.
 *
 * Returns:
 *   FIFO_no_error if the element was successfully dequeued.
 *   FIFO_empty if the FIFO buffer is empty.
 *   FIFO_NuLL if FIFO is a NULL pointer.
 */
E_FIFO_Status_t FIFO_BUF_DEQUEUE(FIFO_BUF_t *Fifo, ELEMENT_TYPE *OUT_Data);

/*
 * FIFO_BUF_PRINT()
 *
 * Prints the contents of a FIFO buffer.
 *
 * Parameters:
 *   FIFO - A pointer to the FIFO buffer to print.
 *   Returns:
 *   FIFO_no_error if the element was successfully dequeued.
 *   FIFO_empty if the FIFO buffer is empty.
 *   FIFO_NuLL if FIFO is a NULL pointer.
 */
E_FIFO_Status_t FIFO_BUF_PRINT(FIFO_BUF_t *Fifo);
#endif /* FIFO_BUF_H_ */

