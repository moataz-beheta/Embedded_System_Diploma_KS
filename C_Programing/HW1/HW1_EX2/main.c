/*
 * main.c
 *
 *  Created on: Oct 26, 2021
 *      Author: Moataz
 */

#include "stdio.h"

void main ()
{
	int Entered_Value=0;
	printf ("Enter an integer : ");

	fflush(stdin); fflush(stdout);

	scanf ("%d",&Entered_Value);

	printf ("\nYou entered : %d",Entered_Value);
}

