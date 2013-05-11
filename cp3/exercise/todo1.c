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
		link max,u;
		u = t->next;
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
		while(t->next->item != max->item)
				t = t->next;
		
		//change the max node's position
		if(max->next != NULL)
		{
				t->next = max->next;
				u->next = max;
				max->next =NULL;
		}
}

void findMin(link t)
{
		link min,u,x;
//		x = t;
		u = t->next;
		min = u;
		//traverse the list and find the max,
		while(u->next != NULL)
		{
				if(u->item < min->item)
						min = u;
				u = u->next;
		}
		if(u->item < min->item)
				min = u;

		//find the max node's previous nodes
		while(t->next->item != min->item)
				t = t->next;
		
		//change the max node's position
}
