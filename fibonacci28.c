#include<stdio.h>
#include<conio.h>
int main()
{
int n,a=0,b=0,c;
printf("enter the number ");
scanf("%d,&n);
for(c=0;c<0;c++)
{
if(c<==1)
{
d=c;
else
{
d=a+b;
a=b;
b=d;
}
printf("the fibonacci numbers are %d",d);
}
getch();
return 0;
}
