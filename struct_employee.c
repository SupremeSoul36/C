#include<stdio.h>
struct Employee
{
    int empno;
    char empname[20];
    char deptname[20];
    float sal;
};
int main()
{
   struct Employee e[5];
   read_details(e);
   print_details(e);
}
void read_details(struct Employee *e)
{
    for(int i=0;i<5;i++)
    {
        printf("\n-----Employee_%d-----\n",i);
        printf("Enter empno: ");
        scanf("%d",&e[i].empno);
        printf("Enter empname: ");
        scanf("%s",&e[i].empname);
        printf("Enter deptname: ");
        scanf("%s",&e[i].deptname);
        printf("Enter salary: ");
        scanf("%f",&e[i].sal);
    }
}
void print_details(struct Employee *e)
{
    printf("Employee_No|Name    |Department   |Salary\n");
    for(int i=0;i<5;i++)
    {
        printf("%d       %s   %s      %f\n",e[i].empno,e[i].empname,e[i].deptname,e[i].sal);
    }
}



/*
Output =>
-----Employee_0-----
Enter empno: 101
Enter empname: Krishna
Enter deptname: Civil
Enter salary: 78.5

-----Employee_1-----
Enter empno: 102
Enter empname: Abhishek
Enter deptname: Mechanical
Enter salary: 77.5

-----Employee_2-----
Enter empno: 103
Enter empname: Rohit
Enter deptname: Comp
Enter salary: 77.5

-----Employee_3-----
Enter empno: 104
Enter empname: Sanket
Enter deptname: Civil
Enter salary: 75.4

-----Employee_4-----
Enter empno: 105
Enter empname: Janhavi
Enter deptname: Electronics
Enter salary: 88.5

Employee_No|Name    |Department   |Salary
101       Krishna   Civil      78.500000
102       Abhishek   Mechanical      77.500000
103       Rohit   Comp      77.500000
104       Sanket   Civil      75.400002
105       Janhavi   Electronics      88.500000
*/
