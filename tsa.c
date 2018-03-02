#include <stdio.h>

int main(void) {
	int d,s,v,a,h;
	scanf("%d%d%d",&d,&s,&v);
	printf("Enter the length ,breadth and heightof the cuboid:%d %d %d\n",d,s,v);
	a=s*v*d;
	h=2((s*v)+(d*v)+(s*d));
	printf("The total surface area and volume of cuboid are %d %d\n",a,h);
	return 0;
}
