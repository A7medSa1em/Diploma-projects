/*
 * main.c
 *
 *  Created on: Jul 3, 2021
 *      Author: A7med
 */


#include <stdio.h>
int main()
{
	float arr[100],sum=0,avg;
	int n,i;
	printf("enter the number of data between 0 and 100");
	fflush(stdout);
	entern:
	scanf("%d",&n);
	if (n>0 && n<100)
	{

		for(i=0;i<n;++i){
		printf("Enter data ");
		fflush(stdout);
		scanf("%f",& arr[i]);
		sum+=arr[i];

	}
		avg=sum/n;
		printf("avg=%.2f",avg);
	}
	else {
		printf("please enter n value between 0 and 100");
		fflush(stdout);
		goto entern;
	}
}
