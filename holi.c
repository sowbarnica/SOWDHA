#include <stdio.h>

int main(void) {
	char d[12],sunday,saturday;
	scanf("%s",d);
	printf("Enter the day  \n",d);
	if((d==sunday)||(d==saturday))
	{
		printf("yes it is a holiday \n",d);
	}
	else
	{
		printf("no it is not a holiday \n",d);
	}
	return 0;
}
