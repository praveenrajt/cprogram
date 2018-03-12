#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char b[100];
printf("\n enter sentence");
gets(b);
printf("\n numeric values are\n");
for(i=0;i<=strlen(b);i++)
{
if(b[i]>='a'&&b[i]<='z')
{
}
else
printf("%d",b[i]);
}
getch();
}
