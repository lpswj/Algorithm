#include <stdlib.h>
#include "UF.h"

static int *id,*sz;

void UFinit(int N)
{
		int i;
		id = malloc(N * sizeof(int));
		sz = malloc(N * sizeof(int));
		for(i = 0;i < N;i++)
		{
				id[i] = i;
				sz[i] = 1;
		}
}

static int find(int x)
{
		int i = x;
		while(i != id[i])
				i = id[i];
		return i;
}

int UFfind(int p,int q)
{
		return (find(p) == find(q));
}

int UFunion(int p,int q)
{
		//int i = find(p), j = find(q);
		//the path compression algorithm
		int i,j;
		for(i = p;i != id[i];i = id[i])
				id[i] = id[id[i]];
		for(j = q;j != id[j];j = id[j])
				id[j] = id[id[j]];
		//end
		if(i == j)
				return 0;
		if(sz[i] < sz[j])
		{
				id[i] = j;
				sz[j] += sz[i];
		}
		else
		{
				id[j] = i;
				sz[i] += sz[j];
		}
		return 1;

}

int UFnum(int p)
{
		return sz[find(p)]-1;
}
