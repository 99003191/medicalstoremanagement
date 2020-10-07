#include"medical.h"
#include<stdio.h>
#include<string.h>

void ChangeMedicineDetails(int number)
 {
  int id,quantity,choice,c,i;
  printf("Enter id to change Details\n");
  scanf("%d",&id);
  for(i=0;i<number;i++)
  {
   if(m[i].id==id && m[i].id!=0)
   {
    do
    {
        printf("Enter\n1 - Change Quantity\n2 - Change Price\n3 - Change Name\n4 - Change Company\n5 - Change Manufaturing Date\n6 - Change Expiry Date\n7 - Change Info\nAny other number to exit");
        scanf("%d",&choice);
        if(choice==1)
        {
         int quantity;
         printf("Enter Quantity to be changed\n");
         fflush(stdin);
         scanf("%d",&quantity);
         m[i].quantity=quantity;
         printf("Quantity changed Successfully\n");
        }
        if(choice==2)
        {
         int price;
         printf("Enter Price to be changed\n");
         fflush(stdin);
         scanf("%d",&price);
         m[i].price=price;
         printf("Price changed Successfully\n");
        }
        if(choice==3)
        {
         char name[100];
         printf("Enter Name to be changed\n");
         fflush(stdin);
         gets(name);
         strcpy(m[i].medicneName,name);
         printf("Medicine Name changed Successfully\n");
        }
        if(choice==4)
        {
         char company[100];
         printf("Enter company to be changed\n");
         fflush(stdin);
         gets(company);
         strcpy(m[i].Company,company);
         printf("Company changed Successfully\n");
        }
        if(choice==5)
        {
         char mfg[11];
         printf("Enter Manufacturing date to be changed\n");
         fflush(stdin);
         gets(mfg);
         strcpy(m[i].Mfg_Date,mfg);
         printf("Manufacturing Date changed Successfully\n");
        }
        if(choice==6)
        {
         char exp[11];
         printf("Enter Expiry date to be changed\n");
         fflush(stdin);
         gets(exp);
         strcpy(m[i].Exp_Date,exp);
         printf("Expiry Date changed Successfully\n");
        }
        if(choice==7)
        {
         char info[100];
         printf("Enter Info to be changed(Less than 100 Characters)\n");
         fflush(stdin);
         gets(info);
         strcpy(m[i].info,info);
         printf("Info changed Successfully\n");
        }
        if(choice<=0 && choice>7)
        {
         printf("Enter valid Choice\n");
        }
        printf("Enter 1 to Change other Details Else any other number\n");
        fflush(stdin);
        scanf("%d",&c);
    }while(c==1);
    
    break;
   }
  }}