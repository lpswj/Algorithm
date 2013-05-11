#include <stdio.h>
#include <stdlib.h>

typedef struct node *link;
struct node{
		int item;
		link next;
};

int listLength(link node);
int nodeDistance(link x,link t);
int listMerge(link x,link t);
void printList(link x);

int main(int argc,char *argv[])
{
		int i, N = atoi(argv[1]);
		int length;
		link t1 = malloc(sizeof *t1),t2 = malloc(sizeof *t2), x1 = t1,x2 = t2;
		t1->item = 1; t1->next= t1;
		t2->item = 1; t2->next= t2;


		for(i = 2;i <= N;i++)
		{
				x1->next = malloc(sizeof *x1);
				x1 = x1->next;
				x1->item = i;x1->next = t1;
		}

		for(i = 2;i <= N;i++)
		{
				x2->next = malloc(sizeof *x2);
				x2 = x2->next;
				x2->item = i;x2->next = t2;
		}
		length = listLength(t1);
		printf("the length of list t1 is %d\n",length);
		printList(t1);
		length = listLength(t2);
		printf("the length of list t2 is %d\n",length);
		printList(t2);
		listMerge(t1,t2);
		length = listLength(t1);
		printf("the length of merged list is %d\n",length);
		printList(t1);
		//printf("the distance between x and t is %d\n",nodeDistance(t,x));
}

/* write a function which return the number of nodes in the list */
int listLength(link t)
{
		link mark = t;
		int cnt = 1;
		while(t->next != mark)
		{
				t = t->next;
				cnt++;
		}
		return cnt;
}

/* nodeDistance: calc the node number between x and t */
int nodeDistance(link x,link t)
{
		int cnt = 0,length = listLength(x);
		while(x->next != t)
		{
				x = x->next;
				cnt++;
		}
		return cnt;
}

/* listMerge: Merge list x and list t,insert list t to list x,
 * insert point is x->next */
int listMerge(link x,link t)
{
		link last = t;		//last is the end of list of t
		while(last->next != t)
				last = last->next;

		last->next = x->next;
		x->next = t;
}

/* printList: print the list from node x */
void printList(link x)
{
		link temp = x;
		while(x->next != temp)
		{			
				printf("%d ",x->item);
				x = x->next;
		}
		printf("%d",x->item);
		printf("\n");
}
