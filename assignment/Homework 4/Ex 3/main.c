/*
 * main.c
 *
 *  Created on: Jul 10, 2021
 *      Author: A7med
 */


#include <stdio.h>
void reverse();
int main(){
	printf("Enter a sentence:");
	fflush(stdout);
	reverse();
	return 0;
}
void reverse()
{
	char c;
	scanf("%s",&c);
	if(c!='\0')
	{reverse();
	printf("%s",&c);
	}

}
