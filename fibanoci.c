#include<stdio.h>        
int main()
{
    int n,i;
    int d=1,s=1,v;
    scanf("%d",&n);
    printf("%d  %d  ",d,s);
    for(i=2;i<n;i++)
    {
        v=d+s;
        printf("%d  ",v);
        d=s;
        s=v;
    }
    return 0;
}
