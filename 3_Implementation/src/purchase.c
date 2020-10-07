#include "medical.h"
#include<stdio.h>
#include<string.h>

void PurchaseMedicine(int number)
 {
  int id,check,i,quantity,flag=0;
  char name[100];
  printf("Enter 1 if you know ID else any other number to enter Name of Medicine\n");
  fflush(stdin);
  scanf("%d",&check);
  if(check==1)
  {
   printf("Enter Id to purchase Medicine\n");
   fflush(stdin);
   scanf("%d",&id);
   for(i=0;i<number;i++)
   {
    if(m[i].id==id)
    {
     flag=1;
     int c;
     printf("These are the details of Medicine\n");
     printf("Name%s\nPrice=%d\nAvailable Quantity=%d\nCompany=%s\nMfg Date=%s\nExp Date=%s\n",m[i].medicneName,m[i].price,m[i].quantity,m[i].Company,m[i].Mfg_Date,m[i].Exp_Date);
      if(strcmp(m[i].info,"")==0)
      {
       printf("Medicine Review/Info=Not Available\n");
      }
      else
      {
       printf("Medicine Review/Info=%s\n",m[i].info);
      }
     printf("Do you want to purchase %s \nIf Yes Enter 1 else any other number\n",m[i].medicneName);
     fflush(stdin);
     scanf("%d",&c);
     if(c==1)
     {
      printf("Enter Quantity to Purchase\n");
      scanf("%d",&quantity);
      if(m[i].quantity>quantity)
      {
       printf("Total Price to be paid=%d\n",quantity*m[i].price);
      }
      else{
       printf("Please Enter quantity below Available Quantity\n");
      }
     }
     break;
    }
   }
   if(flag==0)
   {
    printf("Entered Id Not Found\n");
   }
  }
  else
  {
   printf("Enter Name to search and Purchase\n");
   fflush(stdin);
   gets(name);
   for(i=0;i<number;i++)
   {
    if(strcmp(m[i].medicneName,name)==0)
    {
     flag=1;
     int c;
     printf("These are the details of Medicine\n");
     printf("Name=%s\nPrice=%d\nAvailable Quantity=%d\nCompany=%s\nMfg Date=%s\nExp Date=%s\n",m[i].medicneName,m[i].price,m[i].quantity,m[i].Company,m[i].Mfg_Date,m[i].Exp_Date);
      if(strcmp(m[i].info,"")==0)
      {
       printf("Medicine Review/Info=Not Available\n");
      }
      else
      {
       printf("Medicine Review/Info=%s\n",m[i].info);
      }
     printf("Do you want to purchase %s \nIf Yes Enter 1 else any other number\n",m[i].medicneName);
     fflush(stdin);
     scanf("%d",&c);
     if(c==1)
     {
      printf("Enter Quantity to Purchase\n");
      scanf("%d",&quantity);
      if(m[i].quantity>quantity)
      {
       printf("Total Price to be paid=%d\n",quantity*m[i].price);
      }
      else{
       printf("Please Enter quantity below Available Quantity\n");
      }
     }
     break;
    }
   }
   if(flag==0)
   {
    printf("Entered Name Not Found\n");
   }
  }
 }
