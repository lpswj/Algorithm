#include <stdio.h>
#include <stdlib.h>
#include "Item.h"
#include "QUEUE.h"

static Item *q;
static int N,head,tail;

void QUEUEinit(int maxN)
{
		q = malloc((maxN+1)*sizeof(Item));
		N = maxN + 1;
		head = N;
		tail = 0;
}

int QUEUEempty()
{
		//mark
		return head % N == tail;
}

void QUEUEput(Item item)
{
		//if head is 0 initially,(tail+1)%N == head;
		//here we set head = N.
		if((tail+1) % N == (head %N))
				QUEUEerror();
		q[tail++] = item;
		//mark
		tail = tail % N;
}

Item QUEUEget()
{
		if(QUEUEempty())
				QUEUEerror();
		head = head % N;
		return q[head++];
}

int QUEUEerror()
{
		printf("QUEUE error!!\n");
		return 0;
}
