#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100],tem[100];
printf("\n Enter 5 numbers");
for(i=0;i<5;i++)
scanf("%s",a[i]);
for(i=0;i<5;i++)
{
  if(strcmp(a[i],a[i+1])>0)
  {
    strcpy(tem,str[i]);
    strcpy(a[i],a[i+1]);
    strcpy(a[i],tem);
  }
}
for(i=0;i<5;i++)
printf("%s",a[i]);
getch();
}
