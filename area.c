#include <stdio.h>

int main(void) {
	int b,h;
	int area;
	scanf("%d%d",&b,&h);
	printf("Enter the base and height %d %d\n",b,h);
	area=(b*h)/2;
	printf("Area of the triangle is %d\n",area);
	return 0;
}
