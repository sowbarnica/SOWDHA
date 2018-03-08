#include<stdio.h>
int main()
{
    int temp,s,r;
    scanf("%d %d",&s,&r);
    temp=s;
    s=r;
    r=temp;
    printf("%d %d",s,r);
    return 0;
}
