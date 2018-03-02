#include<stdio.h>
int main()
{
int a=0,b=0,i=0,c=0;
printf("enter the num=");
scanf("%d%d",&a);
while(a!=0)
{
	c=0;
	for(i=2;i<=a/2;++i)
	{
	if(a%i==0)
	{
		c=1;
		break;
	}
}
if(c==0)
	printf("%d",a);
	++a;
}
return 0;
}
