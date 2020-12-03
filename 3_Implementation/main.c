 #include<stdio.h>
 #include<string.h>
 #include<ctype.h>
 #include<stdlib.h>
 #include"medical.h"


 void main()
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
   int i,j;
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
   menu();
          }
        else{
    printf("\nwrong password");
}
    }else{
    printf("\nUser doesn't exist");
}
}
