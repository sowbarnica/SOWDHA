#include <stdio.h>

int main(void) {
	int d,s,v,a,m,h;
	scanf("%d%d%d%d%d%d",&d,&s,&v,&a,&m,&h);
	printf("The answers are %d %d %d",d/s,v%a,m/h);
	return 0;
}
