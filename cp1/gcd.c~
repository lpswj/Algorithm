/* gcd: find the greatest common divisor */

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
		int m,n,gcd,temp;

		if(argc != 3)
		{
				printf("Usage:gcd num1 num2\n");
				return -1;
		}
		m = atoi(argv[1]);
		n = atoi(argv[2]);
		if(m == 0 || n == 0)
		{
				printf("unvaild input,NOT ZERO INPUT!\n");
				return -1;
		}
		if(m < n)
		{
				temp = n;
				n = m;
				m = temp;
		}
		while((gcd = m % n) != 0)
		{
				m = n;
				n = gcd;
		}

		printf("the gcd is %d\n",n);
		return 0;
}
