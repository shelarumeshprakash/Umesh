//Write a C program to read a password until it is correct. For wrong password print "Incorrect password" and for correct password print "Correct password" and quit the program. The correct password is 1234
#include<stdio.h>
#include<conio.h>
int main()
{
    int p,u;
    p=1234;
    printf("enter the password:");
    scanf("%d",&u);
    if(p==u)
    {
        printf("currect password");
    }
    else
    {
        printf("wrong password");
    }
return 0;
}