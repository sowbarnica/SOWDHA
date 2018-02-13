#include <stdio.h>

int main(void) {
	int s,d,v,answer;
	scanf("%d%d%d",&s,&d,&v);
	printf("Enter the three numbers %d %d  %d\n",s,d,v);
	answer=(s^d)%v;
	printf("The value is %d\n",answer);
	return 0;
}

