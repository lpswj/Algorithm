#include <stdio.h>
#include <time.h>

main()
{
		clock_t start,end;
		double run_time;
		int i,j,k,count = 0;
		int N = 10000;
		
		start = clock();
		for(i = 0;i < N;i++)
				for(j = 0;j < N;j++)
						for(k = 0;k < N;k++)
								count++;
		end = clock();
		run_time = (double)(end - start)/CLOCKS_PER_SEC;
		printf("%f seconds\n",run_time);
}
