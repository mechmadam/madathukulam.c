#include<stdio.h>
#include<conio.h>
int main()
{
int n,rem,a;
printf("Enter the num \n");
scanf("%d",&n);
while(n!=0)
{
rem=%n;
a=a+rem;
n=n/10;
}
printf("%d",a);
getch();
return 0;
}
