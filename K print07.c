#include<stdio.h>
#include<string.h>
int main(void);
{
char a[10];
scanf("%s",&a);
int n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%c",a[i]);
getch();
return 0;
}


