/* the implement of list */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "list.h"


link initList(int N)
{
		struct node head;
		int i;
		link t,a = &head;
		
		srand(time(NULL));
		for(i = 0,t = a;i < N;i++)
		{
				t->next = malloc(sizeof *t);
				t = t->next;
				t->next = NULL;
				t->item = rand()%100;
		}
		return a;
}

void printList(link t)
{
		t = t->next;
		while(t != NULL)
		{
				printf("%d ",t->item);
				t = t->next;
		}
		printf("\n");
}

void findMax(link t)
{
		link max,u,p;
		u = t->next;
		//the wrong example with using p = t
		p =t;
		max = u;
		//traverse the list and find the max,
		//u NOT reach to the last node,it reach to the NULL,so it's fault
		while(u->next != NULL)
		{
				if(u->item > max->item)
						max = u;
				u = u->next;
		}
		if(u->item > max->item)
				max = u;

		//find the max node's previous nodes
		while(p->next->item != max->item)
				p = p->next;
		
		//change the max node's position
		p->next = max->next;
		u->next = max;
		max->next =NULL;
}
