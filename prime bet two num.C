#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,c;
printf("enter the intervals");
scanf("%d%d",&a,&b);
printf("prime nos between %d and %d are:",a,b);
while(a<b)
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
getch();
}
	
