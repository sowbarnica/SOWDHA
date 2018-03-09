#include <stdio.h>

int main(void) {
	int d,s, sum=0;
	scanf("%d",&d);
	while(d!=0)
	{
		s=d%10;
		d=d/10;
		sum=sum+s;
	}
	printf("The sum of the digit is %d\n",sum);
	return 0;
}
