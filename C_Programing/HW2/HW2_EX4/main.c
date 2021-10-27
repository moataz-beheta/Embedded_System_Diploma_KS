/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Moataz
 */


#include "stdio.h"

void main ()
{
	float Entered_Number=0;

	printf ("Enter a number : ");

	fflush(stdin); fflush(stdout);

	scanf ("%f",&Entered_Number);


	if (Entered_Number>0)
	{
		printf("\n%f is positive",Entered_Number);
	}

	else if (Entered_Number<0)
	{
		printf("\n%f is negative",Entered_Number);
	}

	else
	{
		printf("\nYou entered zero");
	}
}
