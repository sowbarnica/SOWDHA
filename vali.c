# #include<stdio.h>
int main()
{
char d[30];
int i,s=0,n=0;
printf("enter the string:");
scanf("%s",);
for(i=0;[i]!='\0';i++)
{
if(d[i]=='0'||d[i]=='1'||d[i]=='2'||d[i]=='3'||d[i]=='5'||d[i]=='6'||d[i]=='7'||d[i]=='8'||d[i]=='9')
{
s=s+1;
}
}
if(s==0)
printf("given string not contains numbers");
else
printf("given string contains numbers");
return 0;
}
