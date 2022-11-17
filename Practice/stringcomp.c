#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

#define str_size 100

void main()
{
    char str[str_size];
    int alp, digit, splch, i;
    alp=digit=splch=i=0;

    printf("input a string: \n");
    fgets(str, sizeof str, stdin);

    //check each char of string

    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            splch++;
        }
        i++;
    }
    printf("alphabets = %d \n",alp);
    printf("digit = %d \n ",digit);
    printf("special char = %d \n",splch);

    int len, v=0,c=0;
    len=strlen(str);
    i=0;
    for(i=0; i<len; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            v++;
        }
        else
        {
            c++;
        }
    }
    printf("\n v= %d\n",v);
    printf("\n c= %d\n",c);
}