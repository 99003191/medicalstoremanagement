#include"medical.h"
#include<stdio.h>
#include<string.h>

void StockOfMedicine(int number){
  int i;
  if(number!=0)
  {
      printf("All Available Items are\n");
   for(i=0;i<number;i++)
   {
    if(m[i].id!=0){
    printf("Id=%d\nName=%s\t\tPrice=%d\tAvailable Quantity=%d\nCompany=%s\t\tMfg Date=%s\tExp Date=%s\n",m[i].id,m[i].medicneName,m[i].price,m[i].quantity,m[i].Company,m[i].Mfg_Date,m[i].Exp_Date);
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
  }
  else{
   printf("No Items or Medicines Available\n");
  } 
 }
 