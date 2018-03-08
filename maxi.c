#include<stdio.h>        
int main()
{
    int n,d[10],i,max=-999;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&d[i]);
    }
    for(i=0;i<n;i++)
    {
        if(d[i]>max)
        {
            max=d[i];
        }
    }
    printf("%d",max);
    return 0;
}
