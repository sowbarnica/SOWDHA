#include <stdio.h>

int main(void) {
	int d,s,v;
	scanf("%d",&d);
	printf("Enter the value=\n",d);
	s=d%2;
	if(s==0)
	{
		printf("The given number is power of 2\n",s);
	}
	else
	{
		printf("The given number is not a power of 2\n",s);
	}
	return 0;
}
