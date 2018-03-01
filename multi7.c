#include <stdio.h>

int main(void) {
	int d,s;
	scanf("%d",&d);
	printf("Enter the number:%d\n",d);
	s=d%7;
	if(s==0)
	{
		printf("The given number is a multiple of 7 %d\n",s);
	}
	else
	{
		printf("The given number is not a multiple of 7 %d\n",s);
	}
	return 0;
}
