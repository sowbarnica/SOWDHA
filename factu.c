#include <stdio.h>

int main(void) {
	int i,d, facti=1;
	scanf("%d", &d);
	for(i=1;i<=d;i++)
	{
		facti=facti*i;
	}
	printf("%d", facti);
	return 0;
}
