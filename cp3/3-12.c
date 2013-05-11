/* calc the primer below N with sieve of Eratosthenes methods 
 * Exerciese 3-12:modify the program ,using the char array and 
 * bit array to store the data */

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
		int i,j,N = atoi(argv[1]);
		char *f = malloc(N*sizeof(char));

		if(f == NULL)
		{
				printf("Insufficient memory\n");
				return -1;
		}
		for(i = 2;i < N;i++)
				f[i] = 1;
		for(i = 2;i < N;i++)
				if(f[i])
						for(j = i;i*j < N;j++)
								f[i*j] = 0;
		for(i = 2;i < N;i++)
				if(f[i])
						printf("%4d ",i);
		printf("\n");
}
