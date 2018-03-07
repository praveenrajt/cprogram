#include<stdio.h>
#include<string.h>
int main()
{
int b,i;
char a[100],c;
printf("\n Enter the string");
gets(a);
b=strlen(a)/2;
c=a[b];
for(i=0;i<=strlen(a);i++)
{
if(a[i]!=c)
printf("%c",a[i]);
else
printf("*");
}
return 0;
}
