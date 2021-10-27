/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Moataz
 */

#include "stdio.h"

void main ()
{
	char character;

	printf ("Enter a character : ");

	fflush(stdin); fflush(stdout);

	scanf ("%c",&character);

	printf ("\nASCII value of %c : %d",character,character);
}

