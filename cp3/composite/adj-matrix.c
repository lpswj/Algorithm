#include <stdio.h>
#include <stdlib.h>
#define V 8

main()
{
		int i,j,adj[V][V];
		for(i = 0;i < V;i++)
				for(j = 0;j < V;j++)
						adj[i][j] = 0;
		// the diagonal is always 1;
		for(i = 0;i < V;i++)
				adj[i][i] = 1;
		while(scanf("%d %d",&i,&j) == 2)
		{
				adj[i][j] = 1;
				adj[j][i] = 1;
		}

		for(i = 0;i < V;i++)
				for(j = 0;j < V;j++)
				{
						printf("%3d",adj[i][j]);
						if((j+1) % V ==0)
								printf("\n");
				}

}
