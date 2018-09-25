#include<stdio.h>
int main()
{
  int num,rem;
  sccanf("%d",&num);
  while(num)
  {
    rem=rnum%10;
    if(rem%2!=0)
      printf("%d ",rem);
    num=num/10;
   }
   return 0;
   }
   
