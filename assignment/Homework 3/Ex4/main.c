/*
 * main.c
 *
 *  Created on: Jul 3, 2021
 *      Author: A7med
 */

#include <stdio.h>

int main()
{
	float arr[20],x;
	int n,i,y;
	printf("Enter the Size of array \n");
	fflush(stdout);
	scanf("%d",&n);
	printf("enter the values of the array \n");
	for(i=0;i<n;i++)
	{
		printf("the %d value :",i+1);
		fflush(stdout);
		scanf("%f",&arr[i]);

	}
	printf("The values of the array \n");
	for(i=0;i<n;i++)
	{
		printf("%.1f  ",arr[i]);

	}
	printf("\nEnter The value you want to change \n");
	fflush(stdout);
	scanf("%f",&x);
	printf("Enter The position of value you want to change \n");
	fflush(stdout);
	scanf("%d",&y);


	printf("The values of the array \n");
	for(i=0;i<n;i++)
	{
		arr[y-1]=x;
		printf("%.1f  ",arr[i]);

	}



	return 0 ;
}
