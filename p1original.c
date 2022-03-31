#include<stdio.h>
#include<math.h>
void input(float *x1,float *x2,float *y1,float *y2)
{
  printf("Enter the X-Coordinate of A: ");
  scanf("%f",x1);
  printf("Enter the Y-Coordinate of A: ");
  scanf("%f",y1);
  printf("Enter the X-Coordinate of B: ");
  scanf("%f",x2);
  printf("Enter the Y-Coordinate of B: ");
  scanf("%f",y2);
}
void find_distance(float x1, float y1, float x2, float y2, float *area)
{
  *area = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}
void output(float x1, float y1,float x2, float y2, float area)
{
  printf("The Distance Between The Points A(%0.0f,%0.0f) and B(%0.0f,%0.0f)is %0.2f Units.\n",x1,y1,x2,y2,area);
}
int main()
{
  float x1,x2,y1,y2,area;
  input(&x1, &y1, &x2, &y2);
  find_distance(x1,y1,x2,y2,&area);
  output(x1,y1,x2,y2,area);
  return 0;
}