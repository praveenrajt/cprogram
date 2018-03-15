#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[100],s=0,i;
printf("\n Enter n value=");
scanf("%d",&n);
printf("\n Enter numbers\n");
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
s=s+a[i];
}
printf(" sum of value=%d",s);
getch();
}
