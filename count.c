#include <stdio.h>

int main(void) {
	int d,s,count=0;
	scanf("%d",&d);
	printf("Enter the number: %d\n",d);while(d!=0)
	{
	s=d%10;
	count++;
	d=d/10;
	}
	printf("The no of digits in the given number is %d\n",count);
	return 0;
}
