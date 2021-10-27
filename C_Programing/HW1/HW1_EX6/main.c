/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Moataz
 */

#include "stdio.h"

void main ()
{
	float a=0.0;
	float b=0.0;
	float Temp=0.0;
	printf ("Enter value of a : ");

	fflush(stdin); fflush(stdout);

	scanf ("%f",&a);

	printf ("\nEnter value of b : ");

	fflush(stdin); fflush(stdout);

	scanf ("%f",&b);

	Temp = a;
	a=b;
	b=Temp;

	printf ("\nAfter swapping, value of a = %f\n",a);
	printf ("After swapping, value of b = %f",b);
}
