#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,i=0;
char s[100];
printf("\n Enter char=");
gets(s);
printf("\n Enter no.of times=");
scanf("%d",&a);
for(i=1;i<=a;i++)
printf("\n %s",s);
getch();
}
