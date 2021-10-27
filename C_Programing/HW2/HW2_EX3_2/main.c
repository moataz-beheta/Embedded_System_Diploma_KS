/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Moataz
 */

//Method 2

#include "stdio.h"

void main ()
{
	float First_Number=0;
	float Second_Number=0;
	float Third_Number=0;
	float Largest_Number=0;
	printf ("Enter Three numbers : ");

	fflush(stdin); fflush(stdout);

	scanf ("%f %f %f",&First_Number,&Second_Number,&Third_Number);

	Largest_Number = First_Number;


	if (Second_Number>Largest_Number)
	{
		Largest_Number=Second_Number;
	}

	if (Third_Number>Largest_Number)
	{
		Largest_Number=Third_Number;
	}

	printf("\nLargest number = %f",Largest_Number);

}
