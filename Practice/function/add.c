#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

//square
double square(double num);
//addition
int Add(int a, int b);
//odd and even
int checkOddEven(int n);
//factorial
int fact(int n);
//binary
long toBinary(int);
//max num of array
int MaxArray(int au[]);

int main()
{
    int sum,a,b,i,p=0,r;
    double n;
    printf("enter a num : ");
    scanf("%d",&a);
    printf("enter b num : ");
    scanf("%d",&b);

    if(checkOddEven(a))
    {
        printf("Odd num\n");
    }
    else
    {
        printf("Even num\n");
    }
    n=square(a);
    printf("sqare of %d is %.2f\n",a,n);
    sum=Add(a,b);
    printf("Addition = %d\n",sum);
    // printf("swaping of a=%d, b=%d\n",swap(a,b));
    // printf("swaping of a=%d, b=%d\n\n",a,b);

    //factorial
    printf("enetr a num r : ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        p+=(fact(i)/i);
    }
    printf("sum of all serise is: %d",p);

    //Decemal to Binary
    int dc;
    long bn;
    printf("\nenter a dec. num : ");
    scanf("%d",&dc);
    bn=toBinary(dc);
    printf("binary num is %ld\n\n",bn);

    //max num fromarray
    int au[100],mele2,k,nu;
    printf("\neneter a num for array : ");
    scanf("%d",&nu);
    for(k=0;k<nu;k++)
    {
        printf("elements - %d ",k);
        scanf("%d",&au[k]);
    }
    mele2=MaxArray(au);
    printf("max num is : %d\n",mele2);

    return 0;
}


// max num from array
int MaxArray(int au[])
{
    int nu;
    int i=1,mele2;
    mele2=au[0];
    while(i<nu)
    {
        if(mele2<au[i])
        mele2=au[i];
    i++;
    }
    return mele2;
}
// binary num
long toBinary(int dc)
{
    long bn=0,remainder,f=1;
    while(dc!=0)
    {
        remainder = dc%2;
        bn+=remainder*f;
        f=f*10;
        dc=dc/2;
    }
    return bn;
}

//square of num
double square(double num)
{
    return (num*num);
}

// addition of num
int Add(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}

//Odd and Even number
int checkOddEven(int n)
{
    return (n & 1);
}

//factorial
int fact(int n)
{
    int num=0,f=1;
    while(num<=n-1)
    {
        f=f+f*num;
        num++;
    }
    return f;
}
