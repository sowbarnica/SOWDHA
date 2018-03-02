#include<stdio.h>
int main()
{
    int temp,v,a;
    scanf("%d %d",&v,&a);
    temp=v;
    v=a;
    a=temp;
    printf("%d %d",v,a);
    return 0;
}
