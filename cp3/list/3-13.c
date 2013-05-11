/* Josephus problem */
#include <stdio.h>
#include "list.h"
#include <time.h>

main(int argc,char *argv[])
{
		int i,N = atoi(argv[1]),M = atoi(argv[2]);
		Node t,x;
		clock_t start,end;
		double time;

		start = clock();
//		initNodes(N);
		for(i = 2,x = newNode(1);i <= N;i++)
		{
				t = newNode(i);
				insertNext(x,t);
				x = t;
		}
		while(x != Next(x))
		{
				for(i = 1;i < M;i++)
						x = Next(x);
				freeNode(deleteNext(x));
		}
		end = clock();
		time = (double)(end - start)/CLOCKS_PER_SEC;
		printf("%d\n",Item(x));
		printf("%f\n",time);
}
