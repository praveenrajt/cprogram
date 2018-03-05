#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i;
char a[100],b;
printf("\n Enter any things");
gets(a);
for(i=0;i<=strlen(a);i++)
{
b=a[i];
if(b==' ')
{
}
else
printf("%c",b);
}
getch();
}
