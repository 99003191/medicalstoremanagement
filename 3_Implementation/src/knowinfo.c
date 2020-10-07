#include"medical.h"
#include<stdio.h>
#include<string.h>

void KnowInfoAboutMedicine(int number){
   int i,flag=0;
  char name[100];
  printf("Enter Name of the medicine you want to see Review and Info\n");
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
     printf("Review or Info=%s\n",m[i].info);
    }
    else
    {
     printf("Review or Info=Not Available\n");
    }   
   }
  }
  if(flag==0)
  {
   printf("Entered Name Not Found\n");
  }
 }