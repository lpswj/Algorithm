#include <stdlib.h>
#include "Item.h"
#include "STACK.h"

typedef struct STACKnode *link;
struct STACKnode{
		Item item;
		link next;
};
static link head;
static int cnt = 0;

link NEW(Item item,link next)
{
		link x = malloc(sizeof *x);
		x->item = item;
		x->next = next;
		return x;
}

void STACKinit(int maxN)
{
		head = NULL;
}

int STACKempty()
{
		return head == NULL;
}

void STACKpush(Item item)
{
		if(!(head = NEW(item,head)))
				STACKerror();
}

Item STACKpop()
{
		if(head == NULL)
				STACKerror();
		else
		{
				Item item = head->item;
				link t = head->next;
				free(head);
				head = t;
				return item;
		}
}

int STACKsize()
{
		link t = head;
		while(t->next != NULL)
		{	
				t = t->next;
				cnt++;
		}
		return cnt;
}

void STACKerror()
{
		pritnf("STACK error!\n");
}