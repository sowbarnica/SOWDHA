#include <stdio.h>

int main(void) {
	int d,s;
	scanf("%d",&d);
	s=(d%2);
	if(s==0)
	{
		printf("The  given number is a composite number \n");
	}
	else
	{
		printf("The given number is not a composite number \n");
	}
	return 0;
}
