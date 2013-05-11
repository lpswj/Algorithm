/* calc the primer below N with sieve of Eratosthenes methods 
 * Exerciese 3-12:modify the program ,using bit array 
 * to store the data */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>		/* for CHAR_BIT */

#define BITMASK(b)		(1<<((b)%CHAR_BIT))
#define BITSLOT(b)		((b)/CHAR_BIT)
#define BITSET(a,b)		((a)[BITSLOT(b)]|=BITMASK(b))
#define BITCLEAR(a,b)	((a)[BITSLOT(b)]&=~BITMASK(b))
#define BITTEST(a,b)	((a)[BITSLOT(b)]&BITMASK(b))
#define BITNSLOTS(nb)	((nb+CHAR_BIT-1)/CHAR_BIT)


int main(int argc,char *argv[])
{
		int i,j,N = atoi(argv[1]);
		char *f = malloc((BITNSLOTS(N))*sizeof(char));

		if(f == NULL)
		{
				printf("Insufficient memory\n");
				return -1;
		}
		memset(f,255,BITNSLOTS(N));

		for(i = 2;i < N;i++)
				if(BITTEST(f,i))
						for(j = i;i*j < N;j++)
								BITCLEAR(f,i*j);
		for(i = 2;i < N;i++)
				if(BITTEST(f,i))
						printf("%4d ",i);
		printf("\n");

}
