#include <stdio.h>
#include <stdlib.h>
#define V 8

typedef struct node *link;
struct node{
		int v;
		link next;
};

link NEW(int v,link next)
{
		link x = malloc(sizeof *x);
		x->v = v;
		x->next = next;
		return x;
}

main()
{
		int i,j;
		link adj[V];
		while(scanf("%d %d\n",&i,&j) == 2)
		{
				adj[j] = NEW(i,adj[j]);
				adj[i] = NEW(j,adj[i]);
		}
}
