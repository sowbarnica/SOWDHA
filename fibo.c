#include<stdio.h>        
int main()
{
    int h,a;
    int d=1,s=1,v;
    scanf("%d",&h);
    printf("%d  %d  ",d,s);
    for(a=2;a<h;a++)
    {
        v=d+s;
        printf("%d  ",v);
        d=s;
        s=v;
    }
    return 0;
}
