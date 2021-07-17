/*
 * main.c
 *
 *  Created on: Jul 10, 2021
 *      Author: A7med
 */

#include <stdio.h>
int power(int x,int pow);
int main()
{
	int num,pow,result;
	printf("Enter the number");
	fflush(stdout);
	scanf("%d",&num);
	printf("Enter the Power");
	fflush(stdout);
	scanf("%d",&pow);
	result =power(num,pow-1);
	printf("The reusult of %d^%d= %d \n",num,pow,result);
	return 0;

}
int power (int x, int pow)
{
	if(pow!=0)
		return (x*power(x,pow-1));
}
