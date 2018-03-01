#include <stdio.h>

int main(void) {
	int d,s,v,a;
	scanf("%d%d",&d,&s);
	printf("Enter the two numbers: %d %d \n",d,s);
	v=d-s;
	a=v%2;
	if(a==0)
	{
		printf("The given number is even number %d\n",a);
	}
	else
	{
		printf("The given number is odd number %d\n",a);
	}
	return 0;
}
