#include <stdio.h>

int main(void) 
{
	char str[16];
	int d,count=1;
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(d=0;str[d]!='\0';d++)
	{
		if(str[d]==' ')
		{
			count=count+1;
		}
	}
	printf("\nno of words=%d",count);
	return 0;
}
