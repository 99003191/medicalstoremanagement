 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 #include<ctype.h>
 #include<stdlib.h>
 #include"medical.h"


 main()
 {
     char username[15];
    char password[12];


    printf("Enter your username:\t");
    scanf("%s",&username);

    printf("Enter your password:\t");
    scanf("%s",&password);

    if(strcmp(username,"medical_store")==0){
        if(strcmp(password,"password")==0){

        printf("\nWelcome.Login Success!");
   int i,j,choice,number=0,c;
   for(i=0;i<100;i++)
   {
    m[i].id=0;
    m[i].price=0;
    m[i].quantity=0;
    strcpy(m[i].Mfg_Date,"");
    strcpy(m[i].Exp_Date,"");
    strcpy(m[i].medicneName,"");
    strcpy(m[i].Company,"");
    strcpy(m[i].info,"");
   }

   m[0].id=1;
   m[0].price=120;
   m[0].quantity=30;
   strcpy(m[0].Mfg_Date,"23-04-2016");
   strcpy(m[0].Exp_Date,"24-04-2020");
   strcpy(m[0].medicneName,"Paracetmol");
   strcpy(m[0].Company,"ABCD");
   strcpy(m[0].info,"Good Medicine for Fever");
   do{
   printf("Enter\n1 - Purchase Medicine\n2 - Enter Information about a Medicine\n3 - Stock of Medicine in Store\n4 - Medicine Information\n5 - Add Medicine\n6 - Delete a Medicine\n7 - Change Quantity of Medicine\n");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
    {
     PurchaseMedicine(number+1);
     break;
    }
      case 2:
    {
     EnterInfoAboutMedicine(number+1);
     break;
    }
      case 3:
      {
       StockOfMedicine(number+1);
       break;
      }
      case 4:
      {
       KnowInfoAboutMedicine(number+1);
       break;
      }
      case 5:
      {
       ++number;
       AddMedicineinStore(number,m);
       break;
      }
      case 6:
      {
       DeleteMedicineStore(number+1);
       break;
      }
      case 7:
      {
       ChangeMedicineDetails(number+1);
       break;
      }
   }
     printf("To Continue with other Options Enter 1 Else any other number\n");
     scanf("%d",&c);
   }while(c==1);
        }
        else{
    printf("\nwrong password");
}
    }else{
    printf("\nUser doesn't exist");
}

 }




