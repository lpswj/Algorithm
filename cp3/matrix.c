#include <stdio.h>
#define N 2

main()
{
		int a[2][2] = {1,2,3,4};
		int b[2][2] = {1,2,3,4};
		int c[2][2],i,j,k,line=0;

		for(i = 0;i < N;i++)
				for(j = 0;j < N;j++)
						for(k = 0,c[i][j] = 0.0;k < N;k++)
								c[i][j] += a[i][k]*b[k][j];
		for(i = 0;i < N;i++)
				for(j = 0;j < N;j++)
				{
						if(line % N ==0 && line != 0)
								printf("\n");
						printf("%4d ",c[i][j]);
						line++;
				}
		printf("\n");

}
