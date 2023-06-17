/***
 ======================================================================================================================
 ** Created on     : Mon, May 1, 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : Lifo_buffer
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
#include "LIFO_BUFFER.h"
#include "stdio.h"
#include "stdlib.h"
int main() {
	/**
	 * Create a LIFO buffer with a capacity of 5 elements.
	 */
	Lifo_Buffer_t LIFO;
	uint32_t buf[5];
	uint32_t i;
	uint32_t item;

	/**
	 * Initialize the LIFO buffer.
	 */
	LIFO_BUFFER_INIT(&LIFO, 5, buf);

	/**
	 * Push 6 elements onto the LIFO buffer.
	 */
	for (i = 0; i < 6; ++i) {
		LIFO_BUFFER_PUSH(&LIFO, i);
	}

	/**
	 * Print the contents of the LIFO buffer.
	 */
	LIFO_BUFFER_PRINT(&LIFO);

	/**
	 * Pop 3 elements off of the LIFO buffer.
	 */
	for (i = 0; i < 3; ++i) {
		LIFO_BUFFER_POP(&LIFO, &item);
	}

	/**
	 * Print the contents of the LIFO buffer.
	 */
	LIFO_BUFFER_PRINT(&LIFO);

	/**
	 * Pop 3 elements off of the LIFO buffer.
	 */
	for (i = 0; i < 3; ++i) {
		LIFO_BUFFER_POP(&LIFO, &item);
	}

	/**
	 * Push 4 elements onto the LIFO buffer.
	 */
	for (i = 0; i < 4; ++i) {
		LIFO_BUFFER_PUSH(&LIFO, i);
	}

	/**
	 * Get the top element of the LIFO buffer.
	 */
	LIFO_BUFFER_TOP(&LIFO, &item);

	/**
	 * Print the contents of the LIFO buffer.
	 */
	LIFO_BUFFER_PRINT(&LIFO);

	/**
	 * Return 0 to indicate success.
	 */
	return 0;
}

