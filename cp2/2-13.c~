/* a function to calc lglgN without MAth.h */

#include <stdio.h>
#include <math.h>
#include <time.h>

main()
{
		int N,bit1=0,bit2=0;
		double time;
		clock_t start,end;
		

		printf("input the N:\n");
		scanf("%d",&N);

		start = clock();
		printf("the math.h result of logN is %f\n",log(N)/log(2));
		printf("the math.h result of log(logN) is %f\n",log(log(N)/log(2))/log(2));
		end = clock();
		time = (double)(end - start)/CLOCKS_PER_SEC;
		printf("math running time is %f\n",time);

		while(N/2 != 0){
				N = N / 2;
				bit1++;
		}
		printf("the result of logN is %d\n",bit1);

		while(bit1 / 2 != 0){
				bit1 /= 2;
				bit2++;
		}
		printf("the result of log(logN) is %d\n",bit2);



}
