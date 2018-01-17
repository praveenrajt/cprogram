#include<stdio.h>
#include<conio.h>
void main()
{
char a;
printf("\n Enter anything");
scanf("%c",a);
if(((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')))
printf("\n the value is alphabet");
else
printf("\n the value is not alphabet");
getch();
}
