/* input the point and the distance,summary how many points 
 * in the line */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Point.h"

float randFloat()
{	
		srand(time(0));
		return 1.0*rand()/RAND_MAX;
}

int main(int argc,char *argv[])
{
		float smallest;
		int i,j,p1,p2,N = atoi(argv[1]);

		point *a = malloc(N*sizeof(*a));
		for(i = 0;i < N;i++)
		{
				a[i].x = randFloat();
				a[i].y = randFloat();
		}
		smallest = distance(a[0],a[1]);
		p1 = 0;
		p2 = 1;
		for(i = 0;i < N;i++)
				for(j = i+1;j < N;j++)
						if(distance(a[i],a[j]) < smallest)
						{
								smallest = distance(a[i],a[j]);
								p1 = i;
								p2 = j;
						}
		printf("the nearest points is (%f,%f),(%f,%f)\n",
						a[p1].x,a[p1].y,a[p2].x,a[p2].y);
}
