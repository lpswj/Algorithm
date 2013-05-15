#include <stdio.h>
#include <stdlib.h>
#include "Item.h"
#include "QUEUE.h"

typedef struct QUEUEnode* link;
struct QUEUEnode{
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

void QUEUEinit(int maxN)
{
		head = NULL;
}

int QUEUEempty()
{
		return head == NULL;
}

void QUEUEput(Item item)
{
		if(head == NULL)
		{
				if(!(tail = NEW(item,head)))
						QUEUEerror();
				head = tail;
				return;
		}
		if(!(tail->next = NEW(item,tail->next)))
				QUEUEerror();
		tail = tail->next;
}

Item QUEUEget()
{
		if(QUEUEempty())
				QUEUEerror();
		else
		{
				Item item = head->item;
				link t = head->next;
				free(head);
				head = t;
				return item;
		}
}

int QUEUEerror()
{
		printf("QUEUE error\n");
		return -1;
}
