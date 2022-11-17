#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int bill, quantity;
    char name[100], itom[100];

    printf("Enter name of coustomer : ");
    fgets(name, sizeof name, stdin);
    printf("Enter name of Itom : ");
    fgets(itom, sizeof itom, stdin);
    printf("enter the Rs : ");
    scanf("%d",&bill);
    printf("enter the Quantity : ");
    scanf("%d",&quantity);
//____________________________________________
    printf("==============================\n");
    printf("Name of coustomer : %s \n",name);
    printf("Name of Itom : %s \n",itom);
    printf("Itom Rs : %d \n",bill);
    printf("quantity of itoms : %d \n",quantity);
    printf("Total Rs : %d \n",bill*quantity);

}