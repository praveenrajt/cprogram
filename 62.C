#include<stdio.h>
int main()
{
  int bin,rem,flag=0;
  scanf("%d",&bin);
  while(bin)
  {
    rem=bin%10;
    if(rem>1)
    {
      flag=1;
      break;
     }
     bin=bin/10;
    }
    if(flag==1)
      printf("No");
    else
      printf("Yes");
     return 0;
   }
