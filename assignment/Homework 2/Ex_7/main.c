/*
 * main.c
 *
 *  Created on: Jul 3, 2021
 *      Author: A7med
 */


#include <stdio.h>
int main()
{
	int x,count;
	unsigned long long int i=1;
	printf("enter a value:");
	fflush(stdout);
	scanf("%d",&x);
	if (x==0)
		printf("the factorial = 1 ");

	if(x<0)
		printf("the value must be +ve or zero");
	if (x>0)
	{
		for(count=1;count<=x;++count)
		{
			i=i*count;
		}
		printf("the factorial = %llu \n ",i);
	}

}
