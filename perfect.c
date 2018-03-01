#include <stdio.h>

int main(void) {
	int d,s,v,a;
	scanf("%d%d",&d,&s);
	printf("Enter the two numbers: %d %d \n",d,s);
	v=d*s;
	if(a=(v%d)&&(v%s)==0)
	{
		printf("The given number is a perfect square %d\n",a);
	}
	else
	{
		printf("The given number is  not a perfect square %d\n",a);
	}
	return 0;
}
