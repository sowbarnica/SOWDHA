#include<stdio.h>
int main()
{
    int temp,d,s;
    scanf("%d %d",&d,&s);
    temp=d;
    d=s;
    s=temp;
    printf("%d %d",d,s);
    return 0;
}
