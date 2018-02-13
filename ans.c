#include <stdio.h>
 
int main(void) {
	int s,d,v,a;
	scanf("%d%d%d",&s,&d,&v);
	printf("Enter the three numbers %d %d  %d\n",s,d,v);
	a=(s^d)%v;
	printf("The value is %d\n",a);
	return 0;
}
 
