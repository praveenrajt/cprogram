#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
int a=0,i=0;
char s[100];
clrscr();
printf("\n Enter sentence");
gets(s);
for(i=0;i<=strlen(s);i++)
{
if(s[i]==' ')
{
a++;
}
}
printf("\n no of words=%d",a+1);
getch();
}
