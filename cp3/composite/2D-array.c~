// the memory allocate of two-dimensional array.

#include <stdio.h>

int **malloc2d(int r,int c);

main()
{
		int M = 2,N = 2;
		int **a = malloc2d(M,N);
		int i,j;
		for(i = 0;i < 2;i++)
				for(j = 0;j < 2;j++)
				{
						a[i][j] = 1;
				}
		printf("\n");

}

int **malloc2d(int r,int c)
{
		int i;
		int **t = malloc(r*sizeof(int *));
		for(i = 0;i < r;i++)
				t[i] = malloc(c*sizeof(int));
		return t;
}
