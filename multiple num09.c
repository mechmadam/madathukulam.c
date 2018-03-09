#include<stdio.h>
#include<conio.h>
int main()
{
int i,a;
scanf("%d",&a);
while(a!=0)
{
if (a%10==0)
{
printf("%d",a);
break;
}
a++;
}
getch();
return 0;
}
