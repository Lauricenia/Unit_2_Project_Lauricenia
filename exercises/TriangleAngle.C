
#include <stdio.h>
//This program reads temperature in degrees and displays a message according to the temperature state 

int main() {
  int angle1,angle2,angle3, total;
  //ask the user for the temperature 
  printf("Enter the angles\n");
  scanf("%d %d %d", &angle1, &angle2, &angle3);
  total = angle1 + angle2 + angle3;
 //if temperature 
 if (total == 180)
{

  printf("The triangle is valid\n");
}
else
{
  printf("The triangle is not valid\n");
}

  return 0; 
}
