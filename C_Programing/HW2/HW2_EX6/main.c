/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Moataz
 */

#include "stdio.h"

void main ()
{
	unsigned int Entered_Number=0;
	unsigned int Sum=0;
	int i;
	printf ("Enter an integer : ");

	fflush(stdin); fflush(stdout);

	scanf ("%d",&Entered_Number);

	for (i=1 ; i<=Entered_Number ; i++)
	{
		Sum+=i;
	}

	printf("\nSum = %d",Sum);

}

