#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a>0)
		{
		if(a%i==0)
		{
			printf("%d ",i);
		}
    }
    }
    getch();
    return 0;
    }
    
