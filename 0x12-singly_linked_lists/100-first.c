#include <stdio.h>
#include "lists.h"

void Print_Before_The_Main_Function(void) __attribute__((constructor));


/**
 * Print_Before_The_Main_Function - Function that prints a message before main.
 * --------------------------
 * By Youssef Hassane
 */

void Print_Before_The_Main_Function(void)
{
	printf("You're beat! and yet, you must allow,
	\nI bore my house upon my back!\n");
}
