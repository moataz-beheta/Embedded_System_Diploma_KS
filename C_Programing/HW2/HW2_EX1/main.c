/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Moataz
 */

#include "stdio.h"

void main ()
{
	int Entered_Integer=0;

	printf ("Enter an integer you want to check : ");

	fflush(stdin); fflush(stdout);

	scanf ("%d",&Entered_Integer);

	if (Entered_Integer%2==1)
	{
		printf("\n%d is odd",Entered_Integer);
	}
	else if (Entered_Integer%2==0)
	{
		printf("\n%d is even",Entered_Integer);
	}
	else
	{
		printf ("Please enter a valid number");
	}
}
