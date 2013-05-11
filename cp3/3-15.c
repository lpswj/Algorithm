/* calc the primer below N with sieve of Eratosthenes methods */
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
		int i,j,N = atoi(argv[1]);
		int *f = malloc(N*sizeof(int));

		if(f == NULL)
		{
				printf("Insufficient memory\n");
				return -1;
		}
		for(i = 2;i < N;i++)
				f[i] = 1;
		for(i = 2;i < N;i++)
				//if there is no if(f[i]),running-time is n^2
					for(j = i;i*j < N;j++)
							f[i*j] = 0;
		for(i = 2;i < N;i++)
				if(f[i])
						printf("%4d ",i);
		printf("\n");
}
