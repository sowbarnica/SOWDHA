#include<stdio.h>
int main()
{
	char str[10],length,d,s,tem;
	scanf("%s",str);
	length=strlen(str);
	d=0;
	s=length-1;
	while(i<j)
	{
		tem=str[d];
		str[d]=str[s];
		str[s]=tem;
		d++;
		s--;
	}
	printf("%s",str);
}
