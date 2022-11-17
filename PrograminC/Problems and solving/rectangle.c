#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
// prigram for rectangle and its calculation for perimeter and area
int a,b,c,d;
printf("enter the lienth and width as a, b as: \n");
scanf("%d %d",&a,&b);
c=((2*a)+(2*b));
d=a*b;
printf("area= %d\n",d);
printf("perimeter= %d\n",c);
getch();
}