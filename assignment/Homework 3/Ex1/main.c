/*
 * main.c
 *
 *  Created on: Jul 3, 2021
 *      Author: A7med
 */


#include <stdio.h>
int main()
{
	float x[2][2],y[2][2],sum[2][2];
	int i,j;
	for(i=0;i<=1;i++)
	{for(j=0;j<=1;j++)
	{
		printf("Enter the x%d%d ",i,j);
		fflush(stdout);
		scanf("%f",&x[i][j]);

	}
	}
	for(i=0;i<=1;i++)
		{for(j=0;j<=1;j++)
		{
			printf("Enter the y%d%d ",i,j);
			fflush(stdout);
			scanf("%f",&y[i][j]);

		}
		}
	printf("the sum of the matrix=");
	for(i=0;i<=1;i++)
		{for(j=0;j<=1;j++)
		{
			sum[i][j]=x[i][j]+y[i][j];
			printf("%.2f ",sum[i][j]);
		}
		printf("\n");
		}


	return 0;
}
