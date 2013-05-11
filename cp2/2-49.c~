#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100000

int search_1(int a[],int v,int r);
int search_2(int a[],int v,int l);

main()
{
		int test[N];
		int result,i;

		srand((unsigned)time(0));
		for(i = 0;i < N;i++)
				test[i] = rand() % N;

		result = search_1(test,1,sizeof(test)/sizeof(int));
		printf("the result is %d\n",result);

}


/* Sequene search */
int search_1(int a[],int v,int l)
{
		int i,count = 0;
		for(i = 0;i <= l;i++)
				if(v == a[i])
						count++;
		return count;
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
