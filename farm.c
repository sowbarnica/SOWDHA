#include <stdio.h>

int main(void) {
	float length,breadth,area;
	scanf("%f%f",&length,&breadth);
	printf("Enter the length and breadth of the farm:%f  %f",length,breadth);
	area=(length*breadth);
	printf("Area of the farm :%f",area);
	return 0;
}
