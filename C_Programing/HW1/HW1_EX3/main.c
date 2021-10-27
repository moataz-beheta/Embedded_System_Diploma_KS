/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Moataz
 */

#include "stdio.h"

void main ()
{
	int Fisrt_Integer=0;
	int Second_Integer=0;
	int Sum=0;
	printf ("Enter two integers : ");

	fflush(stdin); fflush(stdout);

	scanf ("%d %d",&Fisrt_Integer,&Second_Integer);

	Sum = Fisrt_Integer + Second_Integer;

	printf ("\nSum : %d",Sum);
}
