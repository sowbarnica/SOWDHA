#include<stdio.h>
int main()
{
int min d,s;
scanf("%d", &min);
printf("Enter the minutes: ");
d=min/60;
s=min%60;
printf("The hour is \n",d);
printf("The minutes is \n",s); 
return 0;
}
