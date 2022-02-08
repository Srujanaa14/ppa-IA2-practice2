#include<stdio.h>
int input()
{
 int n;
 printf("enter the number:\n");
 scanf("%d",&n); 
 return n;
}
int is_composite(int n)
{
  int i;
  for(i=2;i<n/2;i++)
  {
    if(n%i==0)
    return 0;
    else
    return 1;
  }
}
void output(int composite)
{
  if(composite==0)
  {
    printf("the number is composite:\n");
  }
  if(composite==1)
  {
    printf("number is not composite:\n");
  }
}
int main()
{
  int n,composite,result;
  n=input();
  result=is_composite(n);
  output(composite);
  return 0;
}


