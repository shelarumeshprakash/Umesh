#include<stdio.h>
#include<conio.h>

int main()
{
    int a[100],a1[100],a2[200];
    int i,j,k;
    int s1,temp;

    printf("enter the element of num : ");
    scanf("%d ",&s1);

    for(i=0;i<s1;i++)
    {
        printf("elements [%d] ",i);
        scanf(" %d ", &a[i]);
    }
    
    /* size of murged array */
  

    for(i=0;i<s1;i++)
    {
        for(j=i+1; j<s1; j++)
        {
            if(a[j]<a[i])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(i=0; i<s1; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n\n");
        
}