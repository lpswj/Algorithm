/* the implementation of generate random number*/
#include <stdlib.h>
#include <time.h>
#include "Num.h"
#define N 6 	//triple number

Number randNum(int r)
{
		srand((unsigned)time(0));
		return rand()%r;
}

/* generate */
Number randNum1(int r)
{
		srand((unsigned)time(0));
		return (rand()/(float)RAND_MAX)*r;
}

/* isLine: function to judge if the three points in one line */
Number isLine(point A,point B,point C)
{
		float k1,k2;

		k1 = (B.y-A.y) / (B.x-A.x);
		k2 = (C.y-A.y) / (C.x-A.x);

		if(k1 < 0)
				k1 = -k1;
		if(k2 < 0)
				k2 = -k2;
		if(k1 == k2)
				return 1;
		return -1;
}

/* tri_area: calc the area of triangle tr1 
 * with Heron's formula(S=sqrt(p*(p-a)(p-b)(p-c)),p=(a+b+c)/2)*/
float tri_area(triangle tr1)
{
		float a,b,c;	  /* the length of triangle's line */
		a = sqrt((tr1.C.y-tr1.B.y) * (tr1.C.y-tr1.B.y) +(tr1.C.x-tr1.B.x) * (tr1.C.x-tr1.B.x));
		b = sqrt((tr1.C.y-tr1.A.y) * (tr1.C.y-tr1.A.y) +(tr1.C.x-tr1.A.x) * (tr1.C.x-tr1.A.x));
		c = sqrt((tr1.B.y-tr1.A.y) * (tr1.B.y-tr1.A.y) +(tr1.B.x-tr1.A.x) * (tr1.B.x-tr1.A.x));

		float p = (a+b+c)/2;
		float area;		
		return 	area = sqrt(p * (p-a) * (p-b) * (p-c));
}


/* randNum2: generate  triple number */
int randNum2(float *p,triangle tr1)
{
		srand((unsigned)time(0));
		int i;
		for(i = 0;i < N;i++)
		{
			*p++ =  (rand()/(float)RAND_MAX);
		}

		tr1.A.x = p[0];
		tr1.A.y = p[1];
		tr1.B.x = p[2];
		tr1.B.y = p[3];
		tr1.C.x = p[4];
		tr1.C.y = p[5];
}

