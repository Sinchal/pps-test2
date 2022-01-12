#include<stdio.h>
#include<math.h>

float input_radius()
{
  float r;
  printf("Enter the radius\n");
  scanf("%f",&r);
  return r;
}

float input_height()
{
  float h;
  printf("Enter the height\n");
  scanf("%f",&h);
  return h;
}

float input_length()
{
  float l;
  printf("Enter the length\n");
  scanf("%f",&l);
  return l;
}

float find_weight(float r,float h,float l)
{
  float w;
  w = 3.14*r*r*r*sqrt(h*l);
  return w;
}

void output(float r,float h,float l,float w)
{
  printf("The weight of the camel is: %f",w);
}

int main()
{
  float h,l,r,w;
  h=input_height();
  l=input_length();
  r=input_radius();
  w=find_weight(r,h,l);
  output(r,h,l,w);
  return 0;
}

//gcc test.c  -o test -lm
