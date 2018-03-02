#include <stdio.h>

int main(void) {
	int d, s;
	scanf("%d",&d);
	printf("Enter the temperature in celcius:%d\n",d);
	s=d+273;
	printf("The temperature in kelvin is %d\n",s);
	return 0;
}
