/*
 * main.c
 *
 *  Created on: Jul 10, 2021
 *      Author: A7med
 */


# include <stdio.h>
int fact(int n);
int main()
{
	printf("Enter A number ");
	int n,factorial;
	fflush(stdout);
	scanf("%d",&n);
	factorial=fact(n);
	printf("The Factorial of %d = %ld",n,factorial);

	return 0;
}
int fact(int n)
{
	if (n>1)
	return n*fact(n-1);
	else return 1;
}
