#include<stdio.h>
#include<conio.h>
void amin()
{
int a,c,b;
printf("\n Enter no=");
scanf("%d",&a);
c=a%10;
b=a-c;
printf("\n nearest 10 muliple value=%d",b+10);
getch();
}
