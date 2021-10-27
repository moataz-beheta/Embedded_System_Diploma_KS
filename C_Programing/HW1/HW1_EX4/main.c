/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Moataz
 */

#include "stdio.h"

void main ()
{
	float Fisrt_Number=0.0;
	float Second_Number=0.0;
	float Product=0.0;
	printf ("Enter two numbers : ");

	fflush(stdin); fflush(stdout);

	scanf ("%f %f",&Fisrt_Number,&Second_Number);

	Product = Fisrt_Number * Second_Number;

	printf ("\nProduct : %f",Product);
}
