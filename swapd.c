
#include<stdio.h>
int main()
{
    int temp,m,h;
    scanf("%d %d",&m,&h);
    temp=m;
    m=h;
    h=temp;
    printf("%d %d",m,h);
    return 0;
}
