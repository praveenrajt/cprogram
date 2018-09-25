#include<stdio.h>
int main()
{
  int a[100],i,j,temp,num;
  scanf("%d",&num);
  for(i=0;i<num;i++)
    scanf("%d ",&a[i]);
  for(i=0;i<num;i++)
  {
    for(j=i+1;j<num;j++)
    {
      if(a[i]>a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(i=0;i<num;i++)
      printf("%d",a[i]);
     return 0;
