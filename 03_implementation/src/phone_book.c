#include "phone_book.h"
int password()
{
 int pass,x=10;
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
