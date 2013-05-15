<<<<<<< HEAD
/* weighted quick-union algorithm with path compression */
=======
/* weighted quick-union */
>>>>>>> office
#include <stdio.h>
#define N 10

main()
{
		int i,j,p,q,id[N],sz[N];
<<<<<<< HEAD

		for(i = 0;i < N;i++)
		{
				id[i] = i;
				sz[i] = 1;
		}
		while(scanf("%d %d\n",&p,&q) == 2)
		{
				for(i = p;i != id[i];i = id[i])
						id[i] = id[id[i]];
				for(j = q;j != id[j];j = id[j])
						id[j] = id[id[j]];
=======
		for(i = 0;i < N; i++){
				id[i] = i;
				sz[i] = 1;
		}
		while(scanf("%d%d\n",&p,&q) == 2)
		{
				for(i = p;i != id[i];i = id[i]);
				for(j = q;j != id[j];j = id[j]);
>>>>>>> office
				if(i == j)
						continue;
				if(sz[i] < sz[j])
				{
						id[i] = j;
						sz[j] += sz[i];
				}
				else{
						id[j] = i;
						sz[i] += sz[j];
				}
<<<<<<< HEAD
				printf("%d %d\n",p,q);
		}
=======
		}
		for(i = 0;i < N;i++)
				printf("%d ",id[i]);
		printf("\n");
>>>>>>> office
}
