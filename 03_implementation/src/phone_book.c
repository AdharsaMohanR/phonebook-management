#include "phone_book.h"
int password()
{
 int x=10,pass;
 while(x!=0)
 {
   printf("\nInput the password");
   scanf("%d",&pass);
   if(pass==1234)
   {
     printf("correct password");
     x=0;
   }
  else
  {
 printf("wrong password");
  }
printf("\n");
}
 return 0;
}
