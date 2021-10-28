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
	int Desired_Location;
	int Inserted_Element;
	int i,j;

	// Get the number of data from user

	printf ("Enter the number of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Num_Data);

	int Arr_1[Num_Data];
	int Arr_2[Num_Data+1];



	// Get the elements of matrix from user
	printf ("Enter all elements of matrix \n");
	fflush(stdin); fflush(stdout);
	for (i=0 ; i<Num_Data ; i++)
	{
		scanf("%d",&Arr_1[i]);
	}

	// Get the element to be inserted from user
	printf ("Enter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Inserted_Element);

	// Get the location from user
	printf ("Enter the location : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Desired_Location);

	//add the new element to the new array
	for (i=0 ; i< Num_Data+1 ; i++ )
	{
		if (i==Desired_Location-1)
		{
			Arr_2[i]=Inserted_Element;

			for (j=i ; j<Num_Data+1 ; j++ )
			{
				i++;
				Arr_2[i]=Arr_1[j];

			}

			break;
		}

		Arr_2[i]=Arr_1[i];
	}

	//print the new array

	printf ("New matrix :");

	for (i=0 ; i<Num_Data+1 ; i++)
	{
		printf ("%d ",Arr_2[i]);
	}
}

