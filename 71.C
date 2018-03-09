#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,z;
char a[100],b[100];
printf("\n Enter the string");
gets(a);
for(i=0;i<=strlen(a);i++)
{
b[i]=a[i];
}
strrev(b);
for(i=0;i<=strlen(b);i++)
{
if(b[i]==a[i])
{
}
else
{
z=1;
}
}
if(z==1)
printf("n no");
else
printf("\n yes");
getch();
}
