#include <stdio.h>
//This program checks in which quadrant a coordinate point lies

int main() {
  int X, Y;
  //ask the user for the coordinate
  printf("Enter the coordinate point.\n");
  scanf("%i %i",&X, &Y);
  
  if ( X > 0 && Y > 0)
  {
  printf("The coordinate point (%i, %i) lies in the first quadrant\n", X, Y);
  }

  if ( X < 0 && Y > 0)
  printf("The coordinate point (%i, %i) lies in the second quadrant\n", X, Y);

  if ( X < 0 && Y < 0)
  printf("The coordinate point (%i, %i) lies in the third quadrant\n", X, Y);
  
  if ( X > 0 && Y < 0)
  printf("The coordinate point (%i, %i) lies in the fourth quadrant\n", X, Y);

  return 0; 
}
