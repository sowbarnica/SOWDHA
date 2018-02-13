#include <stdio.h>
 
int main(void) {
	int s,d,v,abi;
	scanf("%d%d%d",&s,&d,&v);
	printf("Enter the three numbers %d %d  %d\n",s,d,v);
	abi=(s^d)%v;
	printf("The value is %d\n",abi);
	return 0;
}
 
