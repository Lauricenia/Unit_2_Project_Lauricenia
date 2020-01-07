#include <stdio.h>
//This program checks if a number input by the user is negative or positive

int main() {
  int number;

  //ask the user for the number
  printf("Enter the number\n");
  scanf("%i",&number);
  //if the number is less than 0, it is negative
  if (number < 0)
  {
    printf("The number is negative\n");
  }
  //if it is more, it is positive
  else
  {
    printf("The number is positive\n");
  }
  return 0; 
}
