#include<stdio.h>
int main()
{
  int i,a;
  char s[100];
  printf("\n Enter ");
  gets(s);
  printf("\n Enter=");
  scanf("%d",&a);
  for(i=0;i<a;i++)
  printf("%c",s[i]);
  return 0;
}
  
