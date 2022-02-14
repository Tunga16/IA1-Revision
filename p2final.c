#include <stdio.h>
int input()
{
  int a;
  printf("Enter number\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if((a>b)&&(a>c))
  return a;
  else if((b>a)&&(b>c))
  return b;
  else
  return c;
}
int output(int big)
{
  printf("big is %d",big);
}
int main()
{
  int x,y,z,large;
  x=input();
  y=input();
  z=input();
  large=cmp(x,y,z);
  output(large);
  return 0;
}