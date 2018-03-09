#include <stdio.h>

int main(void) {
	int d;
	scanf("%d",&d);
	printf("Enter the number: %d\n",d);
            if((d>=1)&&(d<=10))
	{
		printf("The given number lies in the range\n",d);
	}
	else
	{
		printf("The number is not in range\n",d);
	}
	return 0;
}
