#include<stdio.h>
int main()
{
int a=0,b=0;
printf("Enter the no=");
scanf("%d",a);
while(a!=0)
{
a=a/10;
b++;
}
printf("\n The no.of digits=%d",b);
return 0;
}
