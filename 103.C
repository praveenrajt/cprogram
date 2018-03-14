#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
printf("\n Enter the string\n");
gets(a);
printf("\n upper case:\n%s",strupr(a));
getch();
}
