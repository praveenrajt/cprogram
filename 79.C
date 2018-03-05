#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,d;
printf("\n Emter a,b value");
scanf("%d%d",&a,&b);
c=a*b;
d=pow(a,2);
if(c==d)
printf("\n yes");
else
printf("no");
getch();
}
