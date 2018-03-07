#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int a=0,i=0;
char b[100];
printf("\n Enter sentence");
gets(b);
for(i=0;i<=strlen(b);i++)
{
if(b[i]=='a'||b[i]=='e'||b[i]=='o'||b[i]=='i'||b[i]=='u')
a=1;
}
if(a==1)
printf("\n yes");
else
printf("\n no");
getch();
}
