/*
 * main.c
 *
 *  Created on: Jul 3, 2021
 *      Author: A7med
 */

#include <stdio.h>
int main()
{
	int arr[10],n,i=0,f;
	scn:
	printf("Enter numbers of Elements in the array between 0 & 10\n");
	fflush(stdout);
	scanf("%d",&n);
	if (n<=10 && n>=0){
	printf("Enter The element of the array\n");
	for(;i<n;i++)
	{
		printf("Enter element %d \n",i+1);
		fflush(stdout);
		scanf("%d",&arr[i]);

	}

	printf("the elements of the array = \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nthe elements to be searched:");
	fflush(stdout);
	scanf("%d",&f);
	for(i=0;i<=n;i++)
	{
		if(arr[i]==f)
			printf("the Value exists at element number %d \n",i+1);
	}
	}
	else {
		printf("the value must be between 0 & 10\n");
		goto scn;
	}
	return 0;
}
