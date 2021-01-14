#include<stdio.h>
int fun(int x,int y,int i)
{
   if((i*y)%x == 0)
   {
       return i*y;
   }
   i++;
   return fun(x,y,i);
}
int main()
{
    int x,y;
    printf("Input first number: ");
    scanf("%d",&x);
    printf("Input second number: ");
    scanf("%d",&y);
    printf("LCM of %d and %d =%d",x,y,fun(x,y,2));
}
