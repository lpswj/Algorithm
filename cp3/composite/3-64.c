#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Nmax 1000
#define Mmax 100

//char buf[Mmax];
int M = 0;

int compare(void *i,void *j)
{
		//TODO
		return strcmp(*(char **)i,*(char **)j);
}

main()
{
		int i,N;
		char *a[Nmax];
		for(N = 0;N < Nmax;N++)
		{
				a[N] = (char *)malloc(Mmax*sizeof(char *));
				if(scanf("%s",a[N]) == EOF)
						break;
		}
		qsort(a,N,sizeof(char*),compare);
		for(i = 0;i < N;i++)
				printf("%s\n",a[i]);
}

