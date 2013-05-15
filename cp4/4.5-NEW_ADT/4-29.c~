#include <stdlib.h>
#include "UF.h"

typedef struct point* link;
struct point{
		int id;
		int sz;
};
static link pt;

void UFinit(int N)
{
		int i;
		pt = malloc(N * sizeof(link));
		for(i = 0;i < N;i++)
		{
				pt[i].id = i;
				pt[i].sz = 1;
		}
}

static int find(int x)
{
		int i = x;
		while(i != pt[i].id)
				i = pt[i].id;
		return i;
}

int UFfind(int p,int q)
{
		return (find(p) == find(q));
}

int UFunion(int p,int q)
{
		int i = find(p), j = find(q);
		//the path compression algorithm
/*
		int i,j;
		for(i = p;i != id[i];i = id[i])
				id[i] = id[id[i]];
		for(j = q;j != id[j];j = id[j])
				id[j] = id[id[j]];
		//end
		*/
		if(i == j)
				return 0;
		if(pt[i].sz < pt[j].sz)
		{
				pt[i].id = j;
				pt[j].sz += pt[i].sz;
		}
		else
		{
				pt[j].id = i;
				pt[i].sz += pt[j].sz;
		}
		return 1;

}

int UFnum(int p)
{
		return pt[find(p)].sz-1;
}
