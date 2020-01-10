
#include <stdio.h>
//This program checks wether a triangle can be formed by a given value for the angles.

int main() {
  int angle1,angle2,angle3, angleSum;
  //ask the user for the angle values
  printf("Enter the values for the angles\n");
  scanf("%d %d %d", &angle1, &angle2, &angle3);
  angleSum = angle1 + angle2 + angle3;

 //if the sum of all angles equal 180, then the triangle can be formed
 if (angleSum == 180)
{

  printf("The triangle is valid\n");
}
//if not, it cannot 
else
{
  printf("The triangle is not valid\n");
}

  return 0; 
}
