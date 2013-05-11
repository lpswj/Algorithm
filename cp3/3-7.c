#include <stdio.h>
#include <math.h>
#include "Num.h"
#define N 100


main()
{
		int i,count=0;
		float x,y,last,dis;
		point p[5];

		x = randNum1(10);
		y = randNum1(10);
		printf("input the point:x,y\n");
		for(i = 0;i < 5;i++)
				scanf("%f %f",&(p[i].x),&(p[i].y));

		dis = sqrt((x-p[0].x)*(x-p[0].x) + (y-p[0].y)*(y-p[0].y));
		last = dis;
		for(i = 1;i < 5;i++){
				dis = sqrt((x-p[i].x)*(x-p[i].x) + (y-p[i].y)*(y-p[i].y));
				if(dis < last){
						last = dis ;
						count = i;
				}

		}

		printf("the point distance is %f\n",last);
		printf("the point is %f %f\n",p[count].x,p[count].y);
}
