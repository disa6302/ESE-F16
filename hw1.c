#include "hw1.h"
char reverse(char *str,int length)
{
	char *last;
	last=str+length;
	char temp;
	while(str<last)
	{
		temp=*str;
		*str=*last;
		*last=temp;
		str++;
		last--;
	}
	return 0;
}

