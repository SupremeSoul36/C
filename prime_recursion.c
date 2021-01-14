#include<stdio.h>
int fun(int x,int i)
{
    if(x%i ==0)
    {
        return 0;
    }
    if(i == x/2)
    {
       return 1;
    }
    i++;
    return fun(x,i);
}
int main()
{
    int choice;
    printf("Enter number: ");
    scanf("%d",&choice);
    if(fun(choice,2))
    {
        printf("%d is a prime number",choice);
    }
    else
    {
         printf("%d is not a prime number",choice);
    }
}
