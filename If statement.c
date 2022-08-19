#include<stdio.h>
#include<conio.h>

int main()

{ 
  int Amount=0;
  printf("Enter your amount=");
  scanf("%d",&Amount);

  if(Amount>=1000)
  { 
   printf("Welcome to our mall");
  }
  
  if(Amount<1000)
  {
   printf("Sorry you can't enter in this mall");
   }

   printf("\nThank you!!");
}