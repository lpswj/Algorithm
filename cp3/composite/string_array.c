#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Nmax 1000
#define Mmax 10000

char buf[Mmax];
int M = 0;
<<<<<<< HEAD

int compare(void *i,void *j)
{
		//TODO
=======
int compare(void *i,void *j)
{
>>>>>>> office
		return strcmp(*(char **)i,*(char **)j);
}

main()
{
		int i,N;
		char *a[Nmax];
		for(N = 0;N < Nmax;N++)
		{
				a[N] = &buf[M];
				if(scanf("%s",a[N]) == EOF)
						break;
<<<<<<< HEAD
				M += strlen(a[N]) + 1;
=======
				M += strlen(a[N])+1;
>>>>>>> office
		}
		qsort(a,N,sizeof(char*),compare);
		for(i = 0;i < N;i++)
				printf("%s\n",a[i]);
<<<<<<< HEAD
}

=======

}
>>>>>>> office
