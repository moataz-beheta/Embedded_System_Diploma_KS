/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Moataz
 */

#include "stdio.h"

void main ()
{
	int Entered_Number=0;
	unsigned int Factorial=1;
	int i;
	printf ("Enter an integer : ");

	fflush(stdin); fflush(stdout);

	scanf ("%d",&Entered_Number);


	if (Entered_Number>=0)
	{
		for ( i=0 ; i<Entered_Number ; i++ )
		{
			Factorial *= (Entered_Number-i);
		}
		printf("\nFactorial = %d",Factorial);
	}
	else
	{
		printf("Error!! Factorial of negative number doesn't exist");
	}
}
