/*
 * main.c
 *
 *  Created on: Jul 6, 2021
 *      Author: A7med
 */

#include<string.h>
#include <stdio.h>
int main()
{
	char s[100],temp;
	int i,j;
	printf("Enter a String\n");
	fflush(stdout);
	gets(s);
	i=0;
	j=strlen(s)-1;
	while (i<j)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		i++;
		j--;
	}
	printf("\nreverse string is:%s",s);
	return 0;

}
