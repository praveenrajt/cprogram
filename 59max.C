#include<stdo.h>
#include<conio.h>
void main()
{
  int a[100],n,i,j,c;
    printf("\n Enter the 10 no=");
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<10;i++)
  {
    for(j=0;j<10-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        c=a[j];
        a[j]=a[j+1];
        a[j+1]=c;
      }
    }
  }
  
    printf("\nmedium number= %d",a[9]);
    
 getch();
}
