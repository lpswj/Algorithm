#include <stdio.h>
#include <stdlib.h>

int **malloc2d(int r,int c);

main(int argc,char *argv[])
{
		int i,j,V;
		V = atoi(argv[1]);
		int **adj = malloc2d(V,V);
		for(i = 0;i < V;i++)
				for(j = 0;j < V;j++)
						adj[i][j] = 0;
		for(i = 0;i < V;i++)
				adj[i][i] = 1;
		while(scanf("%d %d\n",&i,&j) == 2)
		{
				adj[i][j] = 1;
				adj[j][i] = 1;
		}

		for(i = 0;i < V;i++)
				for(j = 0;j < V;j++)
				{
						printf("%4d",adj[i][j]);
						if((j+1) % V ==0)
								printf("\n");
				}
}

int **malloc2d(int r,int c)
{
		int i;
		int **t = malloc(r * sizeof(int *));
		for(i = 0;i < r;i++)
				t[i] = malloc(c * sizeof(int));
		return t;
}
