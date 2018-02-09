#include <stdio.h>

int main(void) {
	int num,temp, digit,d;
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		digit=temp % 10;
		temp=temp/10;
		d=d*10+digit;
		
	}
	printf("the reverse number is %d",d);
	 return 0;
	
}
