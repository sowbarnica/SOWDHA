#include <stdio.h>

int main(void) {
	int v,a;
	scanf("%d",&v);
	a=(v%2);
	if(a==0)
	{
		printf("The  given number is a composite number \n");
	}
	else
	{
		printf("The given number is not a composite number \n");
	}
	return 0;
}
