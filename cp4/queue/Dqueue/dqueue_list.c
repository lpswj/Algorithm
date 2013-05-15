#include <stdlib.h>
#include <stdio.h>
#include "Item.h"
#include "DQUEUE.h"

typedef struct DQUEUEnode* link;
struct DQUEUEnode{
		Item item;
		link next;
};
static link head,tail;

link NEW(Item item,link next)
{
		link x = malloc(sizeof *x);
		x->item = item;
		x->next = next;
		return x;
}

void DQUEUEinit(int maxN)
{
		head = tail = malloc(sizeof(link));
		head ->next = NULL;
}

int DQUEUEempty()
{
		return head == NULL;
}

void DQpush_front(Item item)
{
		if((tail+1) % N == head)
				DQUEUEerror();
		q[head--] = item;
		head = (head + N) % N;
}


void DQpush_back(Item item)
{
		if((tail+1) % N == head)
				DQUEUEerror();
		q[tail++] = item;
		tail = tail % N;
}

Item DQpop_front()
{
		if(DQUEUEempty())
				DQUEUEerror();
		head = head % N;
		return q[++head];
}

Item DQpop_back()
{
		if(DQUEUEempty())
				DQUEUEerror();
		tail = (tail + N) % N;
		return q[--tail];
}

int DQUEUEerror()
{
		printf("DQUEUE error!\n");
		return 0;
}
