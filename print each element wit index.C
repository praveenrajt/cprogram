#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],i,n;
  printf("\nm Enter no of elements");
  scanf("%d",&n);
  printf("\nEnter the no=");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++);
  {
    printf("\n%d %d",a[i],i);
  }
  getch();
}
