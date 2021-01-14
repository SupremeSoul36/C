#include<stdio.h>
int main()
{
   int arr[3][3];
   int i,j,sum=0;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("element-[%d],[%d]: ",i,j);
           scanf("%d",&*(*(arr+i)+j));
       }
   }
   printf("The matrix is :\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%d ",arr[i][j]);
           if(i==j)
           {
               sum=sum+arr[i][j];
           }
       }
       printf("\n");
   }
   printf("\nSum of diagonals =%d",sum);
}


/*
Output =>
element-[0],[0]: 1
element-[0],[1]: 2
element-[0],[2]: 3
element-[1],[0]: 4
element-[1],[1]: 5
element-[1],[2]: 6
element-[2],[0]: 7
element-[2],[1]: 8
element-[2],[2]: 9
The matrix is :
1 2 3
4 5 6
7 8 9

Sum of diagonals =15
*/
