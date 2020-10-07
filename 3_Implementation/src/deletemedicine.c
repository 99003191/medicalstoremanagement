#include"medical.h"
#include<stdio.h>
#include<string.h>

void DeleteMedicineStore(int number)
 {
  int id,i,flag=0,num;
  printf("Enter Id to be deleted\n");
  fflush(stdin);
  scanf("%d",&id);
  for(i=0;i<number;i++)
  {
   if(m[i].id==id)
   {
    flag=1;
    m[i].id=0;
    m[i].price=0;
    m[i].quantity=0;
    strcpy(m[i].medicneName,"");
    strcpy(m[i].Company,"");
    strcpy(m[i].Mfg_Date,"");
    strcpy(m[i].Exp_Date,"");
    strcpy(m[i].info,"");
    num=i;
    break;
   }
  }
  if(flag==1)
  {
   printf("Medicine with %d is Deleted Successfully\n",id);
  }
 }