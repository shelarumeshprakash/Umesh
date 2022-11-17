#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

//function to generate bills

struct items
{
    char item[100];
    float price;
    int qty;
};

struct orders
{
    char customer[50];
    char date[50];
    int numOfItems;
    struct items itm[50];
};


void generateBillHeader(char name[50], char date[50])
{
    printf("\n\n");
        printf("\t  ADV. Restaurant");
        printf("\n\t------------------");
        printf("\n Date:%s",date);
        printf("\n Invoice To : %s",name);
        printf("\n");
        printf("---------------------------------\n");
        printf("Itom\t\t");
        printf("Quantity\t\t");
        printf("Total\t\t");
        printf("\n---------------------------------");
        printf("\n\n");
}
void generateBillBody(char item[50], int qty, float price)
{
    printf("%s\t\t",item);
    printf("%d\t\t",qty);
    printf("%.2f\t\t",qty*price);
    printf("\n\n");
}


void generateBillFooter(float total)
{
    printf("\n");
    float dis=0.1*total;
    float netTotal=total-dis;
    float cgst =0.09*netTotal,grandTotal=netTotal+2*cgst;
    printf("=========================================\n");
    printf("sub Total\t\t%.2f",total);
    printf("\nDiscount @10%s\t\t\t%.2f","%",dis);
    printf("\n\t\t\t\t-------------------------------\n");
    printf("Net Total\t\t\t%.2f",netTotal);
    printf("\nCGST @9%s\t\t%.2f","%",cgst);
    printf("\nSGST @9%s\t\t%.2f","%",cgst);
    printf("\n--------------------------------------");
    printf("\n Grand Total\t\t\t%.2f",grandTotal);
    printf("\n--------------------------------------");
}

int main()
{
    int opt;
    int n,total;
    struct orders ord;
    struct orders order;
    FILE *fp;
    char saveBill = 'y';
    //dashbord

    printf("\t==========ADV.Reastaurant==========");
    printf("\n 1. Generate Invoice");
    printf("\n 2. Show all Invoice");
    printf("\n 3. Search Invoice");
    printf("\n 4. Exit");

    printf("\n\n your choice");
    scanf("%d",&opt);
    
    fgetc(stdin);
    switch(opt)
    {
        case 1:
      
        printf("Name of Coustomer: ");
        fgets(ord.customer,50,stdin);
        ord.customer[strlen(ord.customer)-1]=0;
        strcpy(ord.date, __DATE__ );
        printf("\n Please enter no of itoms: ");
        scanf("%d",&n);
        ord.numOfItems=n;
        for(int i=0;i<n;i++)
        {
            fgetc(stdin);
            printf("\n\n");
            printf("please enter the itom : ");
            fgets(ord.itm[i].item,20,stdin);
            ord.itm[i].item[strlen(ord.itm[i].item)-1]=0;
            printf("\n enter quantity : \t");
            scanf("%d",ord.itm[i].qty); 
            printf("\n please enter the unit price :\t");
            scanf("%f",ord.itm[i].price);
            total+=ord.itm[i].qty*ord.itm[i].price;

        }

        generateBillHeader(ord.customer,ord.date);
        for(int i=0; i<ord.numOfItems;i++)
        {
        generateBillBody(ord.itm[i].item,ord.itm[i].qty,ord.itm[i].price);
        }

    generateBillFooter(total);

    printf("save bill");
    scanf("%s",&saveBill);

    if(saveBill == 'y')
    {
        fp=fopen("RestauramtBill.dar=","a+");
        fwrite(&ord,sizeof(struct orders),1,fp);
        if(!fwrite != 0)
        printf("\n Successfully saved");
        else
        printf("\n Error saving");
        fclose(fp);
    }
    break;

    case 2:
    // system("clear");
    
    fp=fopen("RestaurantBill.dat","r");
    printf("\n  *****your privious Invoice*****\n");
    while(fread(&order, sizeof(struct orders),1,fp));
    generateBillHeader(order.customer, order.date);
    for(int i=0; i<order.numOfItems; i++)
    {
        generateBillBody(order.itm[i].item,order.itm[i].qty,order.itm[i].price);
        total+=order.itm[i].qty*order.itm[i].price;
    }
    generateBillFooter(total);
    
    fclose(fp);
    break;
    printf("\n\n");
    
    return 0;

}}