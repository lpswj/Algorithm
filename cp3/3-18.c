/* count the different number which less than 1000 from input */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 1000

main()
{
		int i,num,cnt,a[N];

		srand(time(0));
		for(i = 0;i < N;i++)
				a[i] = 0;

		for(i = 0;i < N;i++)
		{
				num = rand()%1000;
				if(a[num] == 0)
						a[num]++;
				else
				{
						cnt = i;
						break;
				}
		}
		printf("the num appear same number is %d\n",cnt);
}
