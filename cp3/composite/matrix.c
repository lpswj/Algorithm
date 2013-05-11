// program to solve the mutiply of matrix

#include <stdio.h>
#define N 3

main()
{
		int a[N][N]={1,2,3,4,5,6,7,8,9};
		int b[N][N]={1,2,3,4,5,6,7,8,9};
		int c[N][N],i,j,k;

		for(i = 0;i < N;i++)
				for(j = 0;j < N;j++)
						for(k = 0,c[i][j] = 0.0;k < N;k++)
								c[i][j] += a[i][k] * b[k][j];

		for(i = 0;i < N;i++)
				for(j = 0;j < N;j++)
				{
						printf("%4d ",c[i][j]);
						if((j+1) % N == 0)
								printf("\n");
				}
}
