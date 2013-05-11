/* the implement of list */
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

link freelist;

/*
void initNodes(int N)
{
		int i;
		freelist = malloc((N+1)*(sizeof *freelist));
		for(i = 0;i < N+1;i++)
				freelist[i].next = &freelist[i+1];
		freelist[N].next = NULL;
}
*/

//exercise 3-50:use malloc and free directly to manage memory 
link newNode(int i)
{
		link x = malloc(sizeof(link));
		x->item = i;x->next = x;
		return x;
}

void freeNode(link x)
{
		free(x);
}


void insertNext(link x,link t)
{
		t->next = x->next;
		x->next = t;
}

link deleteNext(link x)
{
		link t = x->next;
		x->next = t->next;
		return t;
}

link Next(link x)
{
		return x->next;
}

int Item(link x)
{
		return x->item;
}
