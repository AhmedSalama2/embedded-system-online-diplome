/***
 ======================================================================================================================
 ** Created on     : Sun, May 14, 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : main
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include "FIFO_Buf.h"

/**
 * @brief This function is the main function of the program.
 *
 * @return 0 on success, non-zero on error.
 */
int main() {
	/**
	 * @var FIFO_BUF_t FIFO
	 * @brief A pointer to a FIFO buffer structure.
	 */
	FIFO_BUF_t FIFO;

	/**
	 * @var uint32_t buf[5]
	 * @brief An array of 5 uint32_t values.
	 */
	uint32_t buf[5];

	/**
	 * @var uint32_t i
	 * @brief A loop counter.
	 */
	uint32_t i;

	/**
	 * @var uint32_t x = 5
	 * @brief The size of the FIFO buffer.
	 */
	uint32_t x = 5;

	/**
	 * @var uint32_t item
	 * @brief A variable to store the dequeued item.
	 */
	uint32_t item;

	/**
	 * Initialize the FIFO buffer.
	 */
	FIFO_BUF_INIT(&FIFO, buf, x);

	/**
	 * Enqueue 6 items into the FIFO buffer.
	 */
	for (i = 0; i < 6; ++i) {
		FIFO_BUF_ENQUEUE(&FIFO, i);
	}

	/**
	 * Dequeue 3 items from the FIFO buffer.
	 */
	for (i = 0; i < 3; ++i) {
		FIFO_BUF_DEQUEUE(&FIFO, &item);
	}

	/**
	 * Enqueue the item 100 into the FIFO buffer.
	 */
	FIFO_BUF_ENQUEUE(&FIFO, 100);

	/**
	 * Print the contents of the FIFO buffer.
	 */
	FIFO_BUF_PRINT(&FIFO);

	/**
	 * Return 0 on success, non-zero on error.
	 */
	return 0;
}

