/* the implement of list */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "list.h"

/*
link initList(int N)
{
		struct node head;
		int i;
		link t,a = &head;
		//the pointer a disapear when the function is over;
		
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
*/

link initList(N)
{
		int i;
		link cu,t,p ;
		p =(link) malloc(sizeof(link));
		srand(time(NULL));

		for(i = 0,t = p;i < N;i++)
		{
				t->next  = (link)malloc(sizeof(link));
				t = t->next ;t->next = NULL;
				t->item = rand() % 100 +1;

		}
		return p;
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
		link max,u,pre;
		pre = t;
		u = t->next;
		max = u;
		//traverse the list and find the max,
		//u NOT reach to the last node,it reach to the NULL,so it's fault
		while(u->next != NULL)
		{
				if(u->next->item > max->item)
				{
						max = u->next;
						pre = u;
				}
				u = u->next;
		}

		/*MARK ,stupid writting.
		if(u->item > max->item)
				max = u;

		//find the max node's previous nodes
		while(t->next->item != max->item)
				t = t->next;
		
		*/

		//change the max node's position
		if(max->next != NULL)
		{
				pre->next = max->next;
				u->next = max;
				max->next =NULL;
		}
}

void findMin(link t)
{
		link u,pre,min;
		u = t->next;
		pre = t;
		min = u;
		
		while(u->next != NULL)
		{
				if(u->next->item < min->item)
				{
						min = u->next;
						pre = u;
				}
				u = u->next;
		}

		if(min != t->next)
		{
				pre->next = min->next;
				min->next = t->next;
				t->next = min;
		}
}

void odd_even_list(link t)
{
		int i;
		//oddlist is the head node for oddlist,so it's evenpist;
		//op is the pointer to traverse oddlist,so it's ep.
		link oddlist,evenpist,p,op,ep;
		p = t;
		op = oddlist;
	    ep = evenpist;	
		
		while(p->next != NULL)
		{
				if(p->next->item % 2 == 0)
				{
						ep->next = p->next;
						ep = ep->next;
				}
				else 
				{
						op->next = p->next;
						op = op->next;
				}
				p = p->next;
		}

		op->next = evenpist->next;
		ep->next = NULL;
		t->next = oddlist->next;
}

/* switchNode: switch the node t and node u */
void switchNode(link head,link t,link u)
{
		link t_pre,u_pre,p,tmp;
		p = head;
		while(p->next != NULL)
		{
				if(p->next == t)
						t_pre = p;
				if(p->next == u)
						u_pre = p;
				p = p->next;
		}

		if(u != t_pre&&t != u_pre)
		{
				tmp = t->next;
				u_pre->next = t;
				t->next = u->next;
				t_pre->next = u;
				u->next =tmp;
		}
		else if(u == t_pre)
		{
				tmp = t->next;
				u_pre->next = t;
				t->next = u;
				u->next = tmp;
		}
		else if(t == u_pre)
		{
				tmp = u->next;
				t_pre->next =u;
				u->next = t;
				t->next = tmp;
		}
}

/*copyList: copy the list t ,create a new list,and return the nl */
link copyList(link t)
{
		link p,np,nl;
		nl = (link)malloc(sizeof(link));
		np = nl;
		p = t;

		while(p->next != NULL)
		{
				np->next = (link)malloc(sizeof(link));
				np = np->next;
				np->item = p->next->item;
				p = p->next;
		}
		np->next = NULL;
<<<<<<< HEAD

		return nl;
}

/* reverse :reverse the list and return the head node */
void reverse(link x)
{
		link t,p = x->next,r = NULL;
		while(p != NULL)
		{
				t = p->next;
				p->next = r;
				r = p;
				p = t;
		}
		//mark
		x->next = r;
}

/* free: free the whole list */
int freeList(link x)
{
		link p;
		while(x != NULL)
		{
				p = x;
				x = x->next;
				free(p);
		}
}

/* free5node :free the nodes whose position is divided by 5 */
void free5node(link x)
{
		link p,tmp;
		int pos = 0;
		p = x;
=======
		return nl;
}

/* freeList: free the list nodes */
void freeList(link t)
{
		link tmp;
		while(t != NULL)
		{
				tmp = t;
				t = t->next;
				free(tmp);
		}

}

/* free5nodes: free the nodes whose position is divided by 5 */
void free5nodes(link t)
{
		link p,tmp;
		p = t;
		int pos = 0;
>>>>>>> office
		while(p->next != NULL)
		{
				pos++;
				if(pos % 5 == 0)
				{
						tmp = p->next;
						p->next = p->next->next;
						free(tmp);
<<<<<<< HEAD
						break;
				}

				if(p->next != NULL)
				{
						p = p->next;
				}
		}

=======
						continue;
				}
				p = p->next;
		}
}

/* freeEvent: free the event nodes in the list */
void freeEvent(link t)
{
		link p,tmp;
		p = t;
		int pos = 0;
		while(p->next != NULL)
		{
				pos++;
				if(pos % 2 == 0)
				{
						tmp = p->next;
						p->next = p->next->next;
						free(tmp);
						continue;
				}
				p = p->next;
		}

}
>>>>>>> office
