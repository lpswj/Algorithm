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
		int i,N = atoi(argv[1]);
		link t = malloc(sizeof *t),x = t;
		x->item = 1;

		for(i = 2;i <= N;i++)
		{
				x->next = malloc(sizeof *x);
				x = x->next;
				x->item = i;
		}
		x->next = NULL;
		printList(t);
		t = reverse(t);
		printList(t);

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
