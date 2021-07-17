/*
 * main.c
 *
 *  Created on: Jul 3, 2021
 *      Author: A7med
 */


#include <stdio.h>
int main()
{
int x,count=1,s=0;
printf("Enter a number:");
fflush(stdout);
scanf("%d",&x);
for(;count<=x;count++)
{
	s+=count;

}
printf("the result = %d",s);
return 0;
}
