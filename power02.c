#include<stdio.h>
#include<conio.h>
int main()
{
int a,i,x=1,pow=2;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		x=x*pow;
		if(x==a)
		{
		printf("%d is a power of 2",a);
		break;
		}
	}
		if(x!=a)
		{
			printf("not");
	}
  getch();
  return 0;
  }
  
