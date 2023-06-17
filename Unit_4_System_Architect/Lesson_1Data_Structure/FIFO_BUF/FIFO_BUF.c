/***
 ======================================================================================================================
 ** Created on     : Sun, May 14, 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : FIFO_BUF
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
#include "FIFO_Buf.h"

/**
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
		uint32_t lenght) {

	/**
	 * Check if the input parameters are valid.
	 */
	if (Fifo == NULL || Base == NULL || lenght == 0) {
		printf("The Buffer pointer is NULL.\n");
		return FIFO_NuLL;
	}

	/**
	 * Initialize the FIFO buffer.
	 */
	Fifo->base = Base;
	Fifo->tail = Base;
	Fifo->head = Base;
	Fifo->lenght = lenght;
	Fifo->count = 0;

	/**
	 * Return success.
	 */
	return FIFO_No_Error;
}

/**
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
E_FIFO_Status_t FIFO_BUF_ISFULL(FIFO_BUF_t *Fifo) {

	/**
	 * Check if the input parameters are valid.
	 */
	if (Fifo == NULL || Fifo->head == NULL || Fifo->tail == NULL
			|| Fifo->base == NULL) {
		printf("The Buffer pointer is NULL.\n");
		return FIFO_NuLL;
	}

	/**
	 * Check if the FIFO buffer is full.
	 */
	if (Fifo->count == Fifo->lenght) {
		printf(" Buffer is Full.\n");
		return FIFO_Full;
	}

	/**
	 * Return not full.
	 */
	return FIFO_Not_Full;
}

/**
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
E_FIFO_Status_t FIFO_BUF_ISEMPTY(FIFO_BUF_t *Fifo) {

	/**
	 * Check if the input parameters are valid.
	 */
	if (Fifo == NULL || Fifo->head == NULL || Fifo->tail == NULL
			|| Fifo->base == NULL) {
		printf("The Buffer pointer is NULL.\n");
		return FIFO_NuLL;
	}

	/**
	 * Check if the FIFO buffer is empty.
	 */
	if (Fifo->count == 0) {
		printf(" Buffer is Empty.\n");
		return FIFO_Empty;
	}

	/**
	 * Return not empty.
	 */
	return FIFO_Not_Empty;
}
/**
 * FIFO_BUF_ENQUEUE()
 *
 * This function enqueue a data element into the FIFO buffer.
 *
 * @param FIFO Pointer to the FIFO buffer structure.
 * @param IN_Data Data element to be enqueued.
 *
 * @return E_FIFO_Status_t
 *    - FIFO_No_Error: The operation was successful.
 *    - FIFO_Full: The FIFO buffer is full.
 */
E_FIFO_Status_t FIFO_BUF_ENQUEUE(FIFO_BUF_t *Fifo, ELEMENT_TYPE IN_Data) {

	// Check for NULL pointer.
	if (!Fifo || !Fifo->head || !Fifo->tail || !Fifo->base) {
		printf("The Buffer pointer is NULL.\n");
		return FIFO_NuLL;
	}

	// Check if the FIFO buffer is full.
	if (FIFO_BUF_ISFULL(Fifo) == FIFO_Full) {
		return FIFO_Full;
	}

	// Enqueue the data element.
	(*Fifo->head) = IN_Data;
	Fifo->count++;
	printf("Element------ %d------- ENQUEUE\n", Fifo->count);

	// Check if the head pointer has reached the end of the buffer.
	if (Fifo->head == (Fifo->base + (Fifo->lenght - 1))) {
		Fifo->head = Fifo->base;
	} else {
		Fifo->head++;
	}

	// Return success.
	return FIFO_No_Error;
}

/**
 * FIFO_BUF_DEQUEUE()
 *
 * This function dequeue a data element from the FIFO buffer.
 *
 * @param FIFO Pointer to the FIFO buffer structure.
 * @param OUT_Data Pointer to the location where the dequeued data element will be stored.
 *
 * @return E_FIFO_Status_t
 *    - FIFO_No_Error: The operation was successful.
 *    - FIFO_Empty: The FIFO buffer is empty.
 */
E_FIFO_Status_t FIFO_BUF_DEQUEUE(FIFO_BUF_t *Fifo, ELEMENT_TYPE *OUT_Data) {

	// Check for NULL pointer.
	if (!Fifo || !Fifo->head || !Fifo->tail || !Fifo->base) {
		printf("The Buffer pointer is NULL.\n");
		return FIFO_NuLL;
	}

	// Check if the FIFO buffer is empty.
	if (FIFO_BUF_ISEMPTY(Fifo) == FIFO_Empty) {
		return FIFO_Empty;
	}

	// Dequeue the data element.
	*OUT_Data = (*Fifo->tail);
	Fifo->count--;
	printf("Element------ %d------- DEQUEUE\n", *Fifo->tail);

	// Check if the tail pointer has reached the end of the buffer.
	if (Fifo->tail == (Fifo->base + (Fifo->lenght - 1))) {
		Fifo->tail = Fifo->base;
	} else {
		Fifo->tail++;
	}

	// Return success.
	return FIFO_No_Error;
}
/**
 * @brief This function prints the contents of a FIFO buffer.
 *
 * @param FIFO The pointer to the FIFO buffer.
 *
 * @return The status of the function.
 *
 * @pre The FIFO buffer must be valid.
 *
 * @post The contents of the FIFO buffer will be printed to stdout.
 */
E_FIFO_Status_t FIFO_BUF_PRINT(FIFO_BUF_t *Fifo) {

	/**
	 * Check if the FIFO buffer is valid.
	 */
	if (!Fifo || !Fifo->head || !Fifo->tail || !Fifo->base) {
		printf("The Buffer pointer is NULL.\n");
		return FIFO_NuLL;
	}

	/**
	 * Check if the FIFO buffer is empty.
	 */
	if (FIFO_BUF_ISEMPTY(Fifo) == FIFO_Empty) {
		return FIFO_Empty;
	}

	/**
	 * Declare a variable to iterate over the FIFO buffer.
	 */
	int i;

	/**
	 * Set the pointer to the start of the FIFO buffer.
	 */
	ELEMENT_TYPE *temp = Fifo->tail;

	/**
	 * Iterate over the FIFO buffer and print each element.
	 */
	for (i = 0; i < Fifo->count; ++i) {
		printf("Element====== %d======== : %d \n", i + 1, *temp);

		/**
		 * Check if the pointer has reached the end of the buffer.
		 * If so, reset the pointer to the start of the buffer.
		 */
		if (temp == (Fifo->base + (Fifo->lenght - 1))) {
			temp = Fifo->base;
		} else {
			temp++;
		}

	}

	/**
	 * Return the status of the function.
	 */
	return FIFO_No_Error;

}
