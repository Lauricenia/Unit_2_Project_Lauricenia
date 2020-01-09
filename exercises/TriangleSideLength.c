#include <stdio.h>
//This program checks whether a triangle is isosceles, equilateral or scalene

int main() {
  int side1,side2,side3, a;
  //ask the user the side lengths
  printf("Enter the side lengths of the triangle\n");
  scanf("%d %d %d", &side1, &side2, &side3);
  
 //if side 1 equals side 2 
 if (side1 == side2)
{ 
  //(option1)and if side 3 is not equal to side 1, it is isosceles
   if (side3 != side1)
   {
     printf("This is an isosceles triangle\n");
   }
   //(option2)and if side 3 is equal to 1, it is equilateral
   else
   {
      printf("This is an equilateral triangle\n");
   }
}
//since, side 1 is not equal to side 2, if one of the resting pairs of sides are equal, then its isosceles
else if ( side1 == side3 || side2 == side3) 
{
   printf("This is an isosceles triangle\n");
}
// if none of the pairs are equal, it is scalene
else
{
   printf("This is a scalene triangle\n");
}
  return 0; 
}
