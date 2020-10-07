
#include<stdio.h>
#include<string.h>
#include "medical.h"

void EnterInfoAboutMedicine(int number)
 {
  int i,flag=0,c;
  char name[100],info[100];
  printf("Enter Name of the medicine you want to Review or include Info\n");
  fflush(stdin);
  gets(name);
  for(i=0;i<number;i++)
  {
   if(strcmp(m[i].medicneName,name)==0)
   {
    flag=1;
    printf("These are the details of Medicine\n");
    printf("Name=%s\nPrice=%d\nAvailable Quantity=%d\nCompany=%s\nMfg Date=%s\nExp Date=%s\n",m[i].medicneName,m[i].price,m[i].quantity,m[i].Company,m[i].Mfg_Date,m[i].Exp_Date);
    if(strcmp(m[i].info,"")!=0)
    {
     printf("Review Already Available!\nIf you want to Add a Review Enter 1 else Any other number\n");
     fflush(stdin);
     scanf("%d",&c);
    }
    else
    {
     printf("Enter review(less than 100 Characters)\n");
     fflush(stdin);
     gets(m[i].info);
    }
    if(c==1)
    {
     printf("Enter review(less than 100 Characters)\n");
     fflush(stdin);
     gets(info);
     strcat(m[i].info,"; ");
     strcat(m[i].info,info);
    }

   }
  }
  if(flag==0)
  {
   printf("Entered Name Not Found\n");
  }
 }
