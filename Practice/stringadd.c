#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s1[100],s2[200];
    int i,j,l,m,k;

    printf("enter two strings as: \n");
    printf("s1 string: \n");
    fgets(s1, sizeof s1, stdin);
    printf("s2 string: \n");
    fgets(s2, sizeof s2, stdin);

    l=strlen(s1);
    m=strlen(s2);

    for(i=0; i<l-1; ++i);
    s1[i]=' ';

    for(j=0; j<m-1; ++j, ++i)
    {
        s1[i]=s2[j];
    }
    k=strlen(s1);
    printf("length = %d\n after concatenation string is : ",k);
    for(i=0;i<k;++i)
    {
        printf("%c",s1[i]);
    }
    printf("\n");
}