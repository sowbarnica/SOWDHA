#include <stdio.h>
int main() 
{
    int d,s,count=0;
    scanf("%d",&d);
    for(s=2;s<=(d/2);s++)
    {
        if(d%s==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("yes...prime");
    }
    else
    {
        printf("no");
    }
	return 0;
}

                                                                                                                                                                                            
