#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char str[100];

    printf("input a string : ");
    fgets(str, sizeof str, stdin);
    printf("Tne string you enter is : \n %s \n",str);
    int l=0;
    while(str[l]!='\0')
    {
        l++;
    }
    printf("length = %d \n",l-1);
    
    // character seperate from string
    int ln=0;
    while(str[ln]!='\0')
    {
        printf("%c  ",str[ln]);
        ln++;
    }
    printf("\n");

    //length of string and reverse string
    int length,i;
    length= strlen(str);
    printf("reverse strings as follow");
    for(i=length; i>=0; i--)
    {
        printf("%c  ",str[i]);
    }
    printf("\n");
//count the words of strings 

int wrd;
i=0;
wrd=0;
while(str[i]!='\0')
{
    if(str[i]==' '  || str[i]=='\n' || str[i]=='\t')
    {
        wrd++;
    }
    i++;
}
printf("total words are = %d",wrd);

}