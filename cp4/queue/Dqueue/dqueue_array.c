#include <stdlib.h>
#include <stdio.h>
#include "Item.h"
#include "DQUEUE.h"

static Item *q;
static int N,head,tail;

void DQUEUEinit(int maxN)
{
		q = malloc(maxN*sizeof(Item));
		N = maxN;
		head = 0;
		tail = 1;
}

int DQUEUEempty()
{
		return head == tail;
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
