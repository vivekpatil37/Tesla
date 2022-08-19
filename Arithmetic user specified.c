#include<stdio.h>
#include<conio.h>

int main()

{
  int num1=12,num2=4,sum=0,sub=0,mul=0,div=0,mod=0;
  sum=num1+num2;

  printf("Enter the first number=",sum);
  scanf("%d",&num1);

  printf("Enter the second number=",sum);
  scanf("%d",&num2);
  
  sub=num1-num2;
  printf("Substraction is=%d\n",sub);

  mul=num1*num2;
  printf("Multiplication is=%d\n",mul);

  div=num1/num2;
  printf("Division is=%d\n",div);

  mod=num1%num2;
  printf("Modulo is=%d\n",mod);

  printf("Thank you!!");
}