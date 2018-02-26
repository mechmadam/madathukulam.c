#include<stdio.h>
#include<conio.h>
int main()
{
char str[100];
int i,count=0;
scanf("%[^\n]s",&str);
for(l=0;str[l]!='\0';l++)
{
if(str[l]>='0'&&str[l]<='9')
count++;
}
printf(" %d ,count");
getch();
return 0;
}
