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

#include "LIFO_BUFFER.h"
#include "stdio.h"

/**
 * LIFO_BUFFER_INIT - Initialize a LIFO buffer.
 *
 * @param LIFO: Pointer to the LIFO buffer structure.
 * @param Lenght: The length of the buffer.
 * @param item_buf: Pointer to the buffer data.
 *
 * @return:
 *   - LIFO_no_error: The buffer was initialized successfully.
 *   - LIFO_NuLL: One of the parameters is NULL.
 */

buffer_status LIFO_BUFFER_INIT(Lifo_Buffer_t *LIFO, uint32_t Lenght,
ELEMNT_TYPE *item_buf) {
	/* Check for NULL parameters. */
	if (!LIFO || Lenght == 0 || !item_buf) {
		printf("The buffer pointer is NULL.\n");
		return LIFO_NuLL;
	}

	/* Initialize the buffer structure. */
	LIFO->Base = item_buf;
	LIFO->head = item_buf;
	LIFO->lenght = Lenght;
	LIFO->counter = 0;

	/* Return success. */
	return LIFO_no_error;
}

/**
 * LIFO_BUFFER_ISFULL()
 *
 * Checks if the LIFO buffer is full.
 *
 * @param LIFO The LIFO buffer structure.
 *
 * @return
 *   - LIFO_no_error if the buffer is not full.
 *   - LIFO_full if the buffer is full.
 */
buffer_status LIFO_BUFFER_ISFULL(Lifo_Buffer_t *LIFO) {
	/**
	 * Check for NULL parameters.
	 */
	if (!LIFO || LIFO->lenght == 0 || !LIFO->Base || !LIFO->head) {
		printf("The buffer pointer is NULL.");
		return LIFO_NuLL;
	}

	if (LIFO->lenght == LIFO->counter
			|| LIFO->head == (LIFO->Base + LIFO->lenght)) {
		printf(" buffer is full.\n");
		return LIFO_full;
	}

	return LIFO_not_full;
}
/**
 * LIFO_BUFFER_ISEMPTY()
 *
 * Checks if the LIFO buffer is empty.
 *
 * @param LIFO The LIFO buffer structure.
 *
 * @return
 *   - LIFO_not_empty if the buffer is not empty.
 *   - LIFO_empty if the buffer is empty.
 */
buffer_status LIFO_BUFFER_ISEMPTY(Lifo_Buffer_t *LIFO) {
	/**
	 * Check for NULL parameters.
	 */
	if (!LIFO || LIFO->lenght == 0 || !LIFO->Base || !LIFO->head) {
		printf("The buffer pointer is NULL.\n");
		return LIFO_NuLL;
	}

	if (LIFO->counter == 0 || LIFO->Base == LIFO->head) {
		printf("the buffer is Empty.\n");
		return LIFO_empty;
	}

	return LIFO_not_empty;
}
/**
 * This function pushes an element onto the LIFO buffer.
 *
 * @param LIFO The pointer to the LIFO buffer.
 * @param item The element to push.
 *
 * @return The status of the operation.
 *   - LIFO_no_error: The operation was successful.
 *   - LIFO_full: The buffer is full.
 *   - LIFO_NuLL: The buffer pointer is NULL.
 */
buffer_status LIFO_BUFFER_PUSH(Lifo_Buffer_t *LIFO, ELEMNT_TYPE item) {

	/**
	 * Check if the buffer pointer is NULL.
	 */
	if (!LIFO || LIFO->lenght == 0 || !LIFO->Base || !LIFO->head) {
		printf("The buffer pointer is NULL.");
		return LIFO_NuLL;
	}

	/**
	 * Check if the buffer is full.
	 */
	if (LIFO_BUFFER_ISFULL(LIFO) == LIFO_full) {
		return LIFO_full;
	}

	/**
	 * Push the element onto the buffer.
	 */
	printf("Element------ %d------- PUSHED\n",LIFO->counter+1);
	*(LIFO->head) = item;
	LIFO->head++;
	LIFO->counter++;

	/**
	 * Return the status of the operation.
	 */
	return LIFO_no_error;
}
/**
 * This function pops an element off of the LIFO buffer.
 *
 * @param LIFO The pointer to the LIFO buffer.
 * @param item The pointer to the element to pop.
 *
 * @return The status of the operation.
 *   - LIFO_no_error: The operation was successful.
 *   - LIFO_empty: The buffer is empty.
 *   - LIFO_NuLL: The buffer pointer is NULL.
 */
buffer_status LIFO_BUFFER_POP(Lifo_Buffer_t *LIFO, ELEMNT_TYPE *item) {

	/**
	 * Check if the buffer pointer is NULL.
	 */
	if (!LIFO || !LIFO->lenght || !LIFO->Base || !LIFO->head || !item) {
		printf("The buffer pointer is NULL.");
		return LIFO_NuLL;
	}

	/**
	 * Check if the buffer is empty.
	 */
	if (LIFO_BUFFER_ISEMPTY(LIFO) == LIFO_empty) {
		return LIFO_empty;
	}

	/**
	 * Pop the element off of the buffer.
	 */
	printf("Element________%d________ POPED\n",LIFO->counter);
	*item = *(LIFO->head - 1);
	LIFO->head--;
	LIFO->counter--;

	/**
	 * Return the status of the operation.
	 */
	return LIFO_no_error;
}

/**
 * This function gets the top element of the LIFO buffer.
 *
 * @param LIFO The pointer to the LIFO buffer.
 * @param item The pointer to the element to get.
 *
 * @return The status of the operation.
 *   - LIFO_no_error: The operation was successful.
 *   - LIFO_empty: The buffer is empty.
 *   - LIFO_NuLL: The buffer pointer is NULL.
 */
buffer_status LIFO_BUFFER_TOP(Lifo_Buffer_t *LIFO, ELEMNT_TYPE *item) {

	/**
	 * Check if the buffer pointer is NULL.
	 */
	if (!LIFO || !LIFO->lenght || !LIFO->Base || !LIFO->head || !item) {
		printf("The buffer pointer is NULL.");
		return LIFO_NuLL;
	}

	/**
	 * Check if the buffer is empty.
	 */
	if (LIFO_BUFFER_ISEMPTY(LIFO) == LIFO_empty) {
		return LIFO_empty;
	}

	/**
	 * Get the top element of the buffer.
	 */
	printf("Element________%d________ AT TOP\n",LIFO->counter);
	*item = *(LIFO->head - 1);

	/**
	 * Return the status of the operation.
	 */
	return LIFO_no_error;
}
buffer_status LIFO_BUFFER_PRINT(Lifo_Buffer_t *LIFO) {
	if (!LIFO || !LIFO->lenght || !LIFO->Base || !LIFO->head) {
		printf("The buffer pointer is NULL.");
		return LIFO_NuLL;
	}
	if (LIFO_BUFFER_ISEMPTY(LIFO) == LIFO_empty) {
		return LIFO_empty;
	}
	uint32_t i;
	for (i = 0; i < LIFO->counter; ++i) {
		printf("Element====== %d======== : %d \n", i + 1, *(LIFO->Base + i));
	}
	return LIFO_no_error;
}

