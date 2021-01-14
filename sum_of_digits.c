#include<stdio.h>
int fun(int x)
{
    int num=0;
    if(x/10==0)
    {
        return x+num;
    }
    else
    {
        num=x%10;
        x=x/10;
        return fun(x)+num;
    }
    
}
int main()
{
    int choice;
    printf("Enter number: ");
    scanf("%d",&choice);
    printf("Sum of digits: %d",fun(choice));
}
