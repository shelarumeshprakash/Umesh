#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    printf("\n \nIs cpmmand processor available?\n");
    if(system(NULL))
    {
        printf("command processor available\n");
    }
    else 
    {
    printf("command processor not available\n");
    exit (1);
    }
printf("executing command DIR\n");
x=system("dir");
printf("returned value is: %d \n",x);
return 0;
}