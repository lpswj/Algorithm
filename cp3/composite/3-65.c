<<<<<<< HEAD
/* use 0 or 1 to fill with a 2d array.
 * if the gcd of i and j is 1,a[i][j] is 1,otherwise 0.
=======
/* Use 0 or 1 to fill with the 2D array
 * if the gcd of i and j is 1,then a[i][j] is 1,
 * otherwise 0
>>>>>>> office
 */

#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
int **malloc2d(int i,int j)
{
		int k;
		int **t = malloc(i * sizeof(int *));
		for(i = 0;
}
main()
{

}

=======
int **malloc2d(int r,int c);
int gcd(int i,int j);

main(int argc,char *argv[])
{
		int M ,N,i,j;
		M = atoi(argv[1]),N = atoi(argv[2]);
		int a[M][N];
		
		for(i = 0;i < M;i++)
				for(j = 0;j < N;j++)
				{
						if(gcd(i,j) == 1)
								a[i][j] = 1;
						else
							   	a[i][j] = 0;
				}

		for(i = 0;i < M;i++)
				for(j = 0;j < N;j++)
				{
						printf("%4d",a[i][j]);
						if((j+1) % N == 0)
								printf("\n");
				}
}

int gcd(int a,int b)
{
		int temp,gcd;
		if(a == 0 || b == 0)
				return 0;
		if(a < b)
		{
				temp = a;
				a = b;
				b = temp;
		}

		while((gcd = a % b) != 0)
		{
				a = b;
				b = gcd;
		}
		return b;
}

int **malloc2d(int r,int c)
{
		int i;
		int **t = malloc(r * sizeof(int *));
		for(i = 0;i < r;i++)
				t[i] = malloc(c * sizeof(int));
		return t;
}


>>>>>>> office
