#include <stdio.h>
#include<string.h>
int main()
{
    char d[100];
    int s,v,count=0;
    scanf("%s",d);
    n=strlen(d);
    for(v=0;v<s;v++)
    {
        if(d[v]==d[s-v-1])
        {
            count++;
        }
    }
    if(s==count)
    {
        printf("yes..it is palindrome");
    }
    else
    {
        printf("not");
    }
	return 0;
}
