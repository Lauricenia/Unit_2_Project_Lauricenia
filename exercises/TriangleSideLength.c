#include <stdio.h>
//This program reads temperature in degrees and displays a message according to the temperature state 

int main() {
  int side1,side2,side3, a;
  //ask the user for the temperature 
  printf("Enter the side lengths of the triangle\n");
  scanf("%d %d %d", &side1, &side2, &side3);
  
 //if temperature 
 if (side1 == side2)
{
   if (side3 != side1)
   {
     printf("The triangle is isosceles\n");
   }
   else
   {
      printf("The triangle is equilateral\n");
   }
}
else if ( side1 == side3 || side2 == side3) 
{
   printf("The triangle is isosceles\n");
}
else
{
   printf("The triangle is escalene\n");
}
  return 0; 
}
