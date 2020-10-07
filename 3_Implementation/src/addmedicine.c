#include"medical.h"
#include<stdio.h>
#include<string.h>
void AddMedicineinStore(int number,struct Medicine m[])
 {
  char name[100];
  printf("Enter Medicine Id\n");
  scanf("%d",&(m[number].id));
  fflush(stdin);
  printf("Enter Medicine Name\n");
  fflush(stdin);
  gets(name);
  strcpy(m[number].medicneName,name);
  printf("Enter Company Name\n");
  fflush(stdin);
  gets(m[number].Company);
  printf("Enter Manufactured Date\n");
  fflush(stdin);
  gets(m[number].Mfg_Date);
  printf("Enter Expiry Date\n");
  fflush(stdin);
  gets(m[number].Exp_Date);
  printf("Enter Quantity\n");
  fflush(stdin);
  scanf("%d",&(m[number].quantity));
  printf("Enter Price\n");
  fflush(stdin);
  scanf("%d",&(m[number].price));
  strcpy(m[number].info,"");
  printf("Medicine with id %d Added Successfully\n",m[number].id);
 }