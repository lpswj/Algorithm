#include <stdio.h>
#include <stdlib.h>

typedef struct node *link;
struct node{
		int item;
		link next;
};

link reverse(link x);
void printList(link x);

int main(int argc,char *argv[])
{
		struct node heada,headb;
		link t,u,x,a = &heada,b;
		int i,N = atoi(argv[1]);

		for(i = 0,t = a;i < N;i++)
		{
				t->next = malloc(sizeof *t);
				t = t->next;t->next = NULL;
				t->item = rand()%1000;
		}
		printList(a->next);

		b = &headb;b->next = NULL;
		for(t = a->next;t != NULL;t = u)
		{
				u = t->next;
				for(x = b;x->next != NULL;x = x->next)
						if(x->next->item > t->item)
								break;
				t->next = x->next;
				x->next = t;
		}
		printList(b->next);
}

/* reverse: reverse the list x,and return the last node pointer r */
link reverse(link x)
{
		link t,y = x,r = NULL;
		while(y !=NULL)
		{
				t = y->next;
				y->next = r;
				r = y;
				y = t;
		}
		return r;
}

/* printList: print the list from list start */
void printList(link x)
{
		while(x->next != NULL)
		{
				printf("%d ",x->item);
				x = x->next;
		}
		printf("%d\n",x->item);
}
