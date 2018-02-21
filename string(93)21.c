#include<stdio.h>
#include<conio.h>
int main()
{
char a;
printf("Enter the number:");
scanf("%c",&a);
if(a>='1'&&a<='9')
{
printf("YES");
}
else
{
printf("NO");
}
getch();
return 0;
}
