#include<stdio.h>
#include<conio.h>
void main()
{
  int i,a[100];
  printf("\n Enter the no of element=");
  scanf("%d",&n);
  printf("\n Enter the elements=");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=1;i<=n;i++)
  {
    if(a[i]>a[i+1])
    {
      max=a[i];
      a[i]=a[i+1];
      a[i+1]=max;
    }
  }
  printf("\n The greatest & smallest  no is=%d %d",a[n],a[1]);
  
  getch();
}
