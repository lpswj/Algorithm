/* count the different number which less than 1000 from input */
#include <stdio.h>
#define N 1000

main()
{
		int i,num,cnt=0,a[N];

		for(i = 0;i < N;i++)
				a[i] = 0;

		while(scanf("%d",&num) == 1)
		{
				if(num < N)
						a[num]++;
		}

		for(i = 0 ;i < N;i++)
				if(a[i] != 0)
						cnt++;
		printf("the summary is %d\n",cnt);
}
