#include <stdio.h>
//This program checks if a number input by the user is negative or positive

int main() {
  int number;

  //ask the user for the number
  printf("Enter the number\n");
  scanf("%d",&number);
  //if the number is less than 0, it is negative
  if (number < 0)
  {
    printf("%d is a negative number\n",number);
  }
  //if it is more, it is positive
  else
  {
    printf("%d is a positive number\n",number);
  }
  return 0; 
}
