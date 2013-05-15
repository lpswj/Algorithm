#include <stdio.h>
#define N 10

main()
{
		int i,p,q,t,id[N];
<<<<<<< HEAD

		for(i = 0;i < N;i++)
				id[i] = i;
		while(scanf("%d %d\n",&p,&q) == 2)
		{
				if(id[p] == id[q])
						continue;
				for(t = id[p],i = 0;i< N;i++)
						if(id[i] == t)
								id[i] = id[q];
//				printf("%d %d\n",p,q);
		}
		for(i = 0; i< N;i++)
				printf("%d ",id[i]);
=======
		for(i = 0;i < N; i++)
				id[i] = i;
		while(scanf("%d%d\n",&p,&q) == 2)
		{
				if(id[p] == id[q])
						continue;
				for(t = id[p],i=0;i < N;i++)
						if(id[i] == t)
								id[i] = id[q];
				printf("%d %d\n",p,q);
		}
>>>>>>> office
}
