#include <stdio.h>
#include <time.h>
#define N 400000 

int search_1(int a[],int v,int r);
int search_2(int a[],int v,int l);

main()
{
		int test[N];
		int result,i;
		double time;
		clock_t start,end;

		for(i = 0;i < N;i++)
				test[i] = i;

		start = clock();
		result = search_1(test,N-1,sizeof(test)/sizeof(int));
		end = clock();
		time = (double)(end - start)/CLOCKS_PER_SEC;
		printf("the result is %d\n",result);
		printf("the runtime is %.8f\n",time);

}


/* Sequene search */
int search_1(int a[],int v,int l)
{
		int i;
		for(i = 0;i <= l;i++)
				if(v == a[i])
						return i;
		return -1;
}

int search_2(int a[],int v,int l)
{
		int low,high,mid;

		low = 0;
		high = l-1;
		
		while(low <= high){
				mid = (low+high) / 2;
				if(v < a[mid])	
						high = mid - 1;
				else if(v > a[mid])
						low = mid + 1;
				else
						return mid;
		}
		return -1;
}
