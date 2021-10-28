/*
 * main.c
 *
 *  Created on: Oct 28, 2021
 *      Author: Moataz
 */

#include "stdio.h"

void main ()
{
	int Num_Data;
	int i;
	float average=0;
	// Get the number of data from user

	printf ("Enter the number of data : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Num_Data);

	// create an array
	float a[Num_Data];

	// Get the elements of matrix from user

	for (i=0 ; i<Num_Data ; i++)
	{
		printf ("%d. Enter number :",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&a[i]);
	}

	//Calculate the average of entered data
	for (i=0 ; i<Num_Data ; i++)
	{
		average += a[i];
	}

	average /= Num_Data;

	//print the average
	printf ("Average = %f",average);
}
