#include<stdio.h>
int main()
{
    int choice;
    printf("Enter number: ");
    scanf("%d",&choice);
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=2*i;j++)
        {
            if(j%2==0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }        
        }
        printf("\n");
    }
}
