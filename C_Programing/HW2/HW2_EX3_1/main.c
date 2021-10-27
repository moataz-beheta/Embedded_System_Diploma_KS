/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Moataz
 */

//Method 1

#include "stdio.h"

void main ()
{
	float First_Number=0;
	float Second_Number=0;
	float Third_Number=0;

	printf ("Enter Three numbers : ");

	fflush(stdin); fflush(stdout);

	scanf ("%f %f %f",&First_Number,&Second_Number,&Third_Number);

	if (First_Number>Second_Number)
	{
		if (Third_Number>First_Number)
		{
			printf("\nLargest number = %f",Third_Number);
		}
		else
		{
			printf("\nLargest number = %f",First_Number);
		}

	}

	else
	{
		if (Third_Number>Second_Number)
		{
			printf("\nLargest number = %f",Third_Number);
		}
		else
		{
			printf("\nLargest number = %f",Second_Number);
		}
	}
}
