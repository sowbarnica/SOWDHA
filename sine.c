#include <stdio.h>

int main(void) {
int A;
float sine;
scanf("%d",&A);
printf("Enter the value :%d\n",A);
sine=A-((A^3)/3!)+((A^5)/5!)-((A^7)/7!);
printf("Sine of the given angle is %f\n",sine);
return 0;
}
