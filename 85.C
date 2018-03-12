#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char b[100];
printf("\n enter sentence");
gets(b);
for(i=0;i<=strlen(b);i++)
{
if(i%2==0)
{
printf("%c",b[i]);
}
}
printf("\n");
for(i=0;i<=strlen(b);i++)
{
if(i%2!=0)
{
printf("%c",b[i]);
}
}

getch();
}
