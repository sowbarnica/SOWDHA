#include <stdio.h>

int main(void) {
	int v,s,d,angle,interiorangle;
	scanf("%d%d%d",&v,&s,&d);
	printf("Enter the angles:%d %d %d\n",v,s,d);
	angle=v+s+d;
	interiorangle=180-angle;
	if(interiorangle<180)
	{
	printf("yes\n");	
	}
	else
	{
		printf("no\n");
	}
	return 0;
}
