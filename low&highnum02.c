#include<stdio.h>
#include<conio.h>
int main()
{
int a[50];
int i,n;
printf("\n Enter the size of the array");
scanf("%d",&n);
printf("\n Enter the element of the array");
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
int max=a[0];
int min=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
if(a[i]<min)
{
min=a[i];
}
}
printf("\n Enter the highest elements is %d",max);
printf("\n Enter the lowest elements is %d",min);
getch();
retrun 0;
}
