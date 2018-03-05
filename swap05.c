#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,temp;
printf("Enter the values \n");
scanf("%d%D",&a,&b);
temp=a;
a=b;
b=temp;
printf("after swapping is %d%d\n",a,b);
getch();
return 0;
}
