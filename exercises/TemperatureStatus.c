#include <stdio.h>
//This program reads temperature in degrees and displays a message according to the temperature state 

int main() {
  int temp;
  //ask the user for the temperature 
  printf("Enter the temperature in centigrade\n");
  scanf("%d", &temp);
  
 //if temperature is less than 0, its freezing weather 
if ( temp < 0)
{
  printf("Freezing weather\n");
}
//and if temperature is less than 10, its a very cold weather
else if ( temp < 10 )
{ 
  printf("Very cold weather\n");
}
//and if temperature is less than 20, it is a cold weather
else if ( temp < 20)
{ 
  printf("Cold weather\n");
}
// if temperature is less than 30, it is a normal temperature
else if ( temp < 30)
{ 
  printf("Normal in Temperature\n");
}
// and if temperature is less than 40, it is hot
else if ( temp < 40)
{ 
  printf("It is hot\n");
}
// and if it doesnt follow any of the conditions above, it is very hot
else
{ 
  printf("It is very hot\n");
}

  return 0; 
}
