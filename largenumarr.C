#include<stdo.h>
#include<conio.h>
void main()
{
  int a[100],n,i,j,c;
  printf("\n Enter the no.of element=");
  scanf("%d",&n);
  printf("\n Enter the no=");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        c=a[j];
        a[j]=a[j+1];
        a[j+1]=c;
      }
    }
  }
  
    printf("\nmedium number= %d",a[n-1]);
    
 getch();
}
