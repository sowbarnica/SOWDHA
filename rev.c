include<stdio.h>
int main()
{
    int temp,d1,s1;
    scanf("%d %d",&d1,&s1);
    temp=d1;
    d1=s1;
    s1=temp;
    printf("%d %d",d1,s1);
    return 0;
}
