/*
 * main.c
 *
 *  Created on: Jul 6, 2021
 *      Author: A7med
 */


#include <stdio.h>
int main(){
	char ch[100];
	int i=0;
	printf("Enter a String:");
	fflush(stdout);
	gets(ch);
	while (ch[i]!='\0')
	{
		i++;
	}
	printf("the length of the string is %d",i);
	return 0;

}
