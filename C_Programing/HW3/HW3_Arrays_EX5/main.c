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
	int Desired_Element;
	int i;

	// Get the number of data from user

	printf ("Enter no of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Num_Data);

	int Arr[Num_Data];


	// Get the elements of matrix from user
	printf ("Enter all elements of matrix \n");
	fflush(stdin); fflush(stdout);
	for (i=0 ; i<Num_Data ; i++)
	{
		scanf("%d",&Arr[i]);
	}

	// Get the element to be searched from user
	printf ("Enter the element to be searched : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Desired_Element);

	for (i=0 ; i<=Num_Data ; i++)
	{
		if (i==Num_Data)
		{
			printf("Number not found");
			break;
		}

		if (Desired_Element==Arr[i])
		{	printf("Number found at location : %d", i+1);
			break;
		}
	}
}
