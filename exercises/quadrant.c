#include <stdio.h>
//This program checks in which quadrant a coordinate point lies

int main() {
  int X, Y;
  //ask the user for the coordinate
  printf("Enter the XY coordinates.\n");
  scanf("%i %i",&X, &Y);
  
  //first quadrant(+,+)
  if ( X > 0 && Y > 0)
  {
  printf("The coordinate point (%i, %i) lies in the first quadrant\n", X, Y);
  }
 //second quadrant(-,+)
  if ( X < 0 && Y > 0)
  {
    printf("The coordinate point (%i, %i) lies in the second quadrant\n", X, Y);
  }
  //third quadrant(-,-)
  if ( X < 0 && Y < 0)
  {
    printf("The coordinate point (%i, %i) lies in the third quadrant\n", X, Y);
  }
  //fourth quadrant(+,-)
  if ( X > 0 && Y < 0)
  {
    printf("The coordinate point (%i, %i) lies in the fourth quadrant\n", X, Y);
  }
  return 0; 
}
