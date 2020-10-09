#include "phone_book.h"
int password()
{
 int k;
 char pword[10],pass;
 printf("enter the password:");
 scanf("%s",pword);
 if(pword=="pass")
 {
  k=1;
 }
 else
  {
   k=0;
  }
 return k;
}
