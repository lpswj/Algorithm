#include <stdio.h>
#include "list.h"

main(int argc,char *argv[])
{
		int i,N = atoi(argv[1]);
		link t,x,head;
		head = initList(N);
		printList(head);
<<<<<<< HEAD
		free5node(head);
=======
		freeEvent(head);
>>>>>>> office
		printList(head);
}
