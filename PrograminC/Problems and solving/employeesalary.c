#include<stdio.h>
#include<conio.h>
int main()
{
    int id,m,h,salary;
    printf("Enter the id of employee : ");
    scanf("%d",&id);
    printf("Enter the mount per hour of employee : ");
    scanf("%d",&m);
    printf("Enter hour of works in month of employee : ");
    scanf("%d",&h);
    salary=m*h;
    printf("salary of employee : %d",salary);
getch();
}
