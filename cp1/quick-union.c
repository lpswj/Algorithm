#include <stdio.h>
#define N 10

main()
{
		int i,j,p,q,id[N];
<<<<<<< HEAD

		for(i = 0;i < N;i++)
				id[i] = i;
		while(scanf("%d %d\n",&p,&q) == 2)
=======
		for(i = 0;i < N; i++)
				id[i] = i;
		while(scanf("%d%d\n",&p,&q) == 2)
>>>>>>> office
		{
				for(i = p;i != id[i];i = id[i]);
				for(j = q;j != id[j];j = id[j]);
				if(i == j)
						continue;
				id[i] = j;
<<<<<<< HEAD
				printf("%d %d\n",p,q);
		}
=======
		}
		for(i = 0;i < N;i++)
				printf("%d ",id[i]);
>>>>>>> office
}
