#include <stdio.h>
int main(void)
{
int year;
scanf("%d",&year);
printf("Enter the year=");
if(year%4==0)
{
printf("leap year");
}
else

{
printf("not a leap year");
}
return 0;
}
