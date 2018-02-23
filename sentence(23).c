#include<stdio.h>
#include<conio.h>
int main()
{
char a[100];
int count=0,i;
printf("\n Enter the sentence");
scanf("%[^\n]s",&s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='  ')
count++;
}
printf("\n number the words are: %d count+1");
getch();
return 0;
}

