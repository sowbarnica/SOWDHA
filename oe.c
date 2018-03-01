#include <stdio.h>

int main(void) {
	int d,s,v;
	scanf("%d%d",&d,&s);
	printf("Enter the two numbers: %d %d\n",d,s);
	v=d+s;
	if(v%2==0)
	{
		printf("The given number is even number %d\n",v);
	}
	else
	{
		printf("The given number is odd number %d\n",v);
	}
	return 0;
}
