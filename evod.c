#include <stdio.h>
int main(void) {
	int d,s,v,a;
	scanf("%d%d",&s,&d);
	printf("Enter the two numbers:%d %d\n",s,d);
	v=s*d;
	a=v%2;
	if(a==0)
	{
		printf("Even number %d\n",a);
	}
	else
	{
		printf("Odd number %d\n",a);
	}
	return 0;
}
