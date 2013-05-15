#include <stdio.h>
#include <string.h>

main(int argc,char *argv[])
{
		char *s = argv[1];
		int len = strlen(s);
		char *p;
		p = s+len-1;

		while(s < p && *s == *p)
		{
				s++;
				p--;
		}
		if(s == p ||s==p+1)
				printf("the string is echo string\n");
		else
				printf("NOT ECHO STRING!\n");

}
