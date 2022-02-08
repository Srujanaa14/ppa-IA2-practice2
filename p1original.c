#include<stdio.h>
void input( float *base,float *height)
{
  printf("enter the height of the triangle:\n");
  scanf("%f",height);
  printf("enter the base of the triangle:\n");
  scanf("%f",base);
}
void find_area(float height,float base,float *area)
{
  *area=0.5*base*height;
}
void output(float area)
{
  printf("area of the triangle is %0.2f",area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(height,base,&area);
  output(area);
  return 0;
}

  

