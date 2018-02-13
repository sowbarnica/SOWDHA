#include <stdio.h>
 
int main(void) {
	int s,d,v,ans;
	scanf("%d%d%d",&s,&d,&v);
	printf("Enter the three numbers %d %d  %d\n",s,d,v);
	ans=(s^d)%v;
	printf("The value is %d\n",ans);
	return 0;
}
