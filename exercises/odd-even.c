#include <stdio.h>
//This program checks if a number input by the user is odd or even

int main() {
  int number;

  //ask the user for the number
  printf("Enter the number\n");
  scanf("%d",&number);

  //If number is divisible by two it is even
   if (number%2 == 0)
   {
     printf("The number is even\n");
   }
   //if not, it is odd
   else
   {
    printf("The number is odd\n"); 
   }

  return 0;
}
