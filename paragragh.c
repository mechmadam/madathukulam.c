#include<stdio.h>
#include<conio.h>
int main()
{
char k[100];
int count=0,i;
clrscr();
printf("\n paragragh");
scanf("%[^\n]k",&k);
for(i=1;k[i]!='\0';i++)
{
if(k[i]=='.')
count++;    
}
printf("\n Number of lines are: %d",count);
getch();
return 0;
}
