#include <stdlib.h>
#include <stdio.h>
//This program reads temperature in degrees and displays a message according to the temperature state 

int main() {
  int id,unit;
  float charge, surchg, net;
  char name[50];
  //ask the user for the temperature 
  printf("Enter your id, name and unit consumed in the same order\n");
  scanf("%d %s %d", &id, name, &unit);


 //if temperature 
if (unit<100)
 {
   printf("ERROR. Bill cannot be less than ¥100.");
   exit(0);
 }
else if (unit<199)
{
  charge = unit* 1.20;
}
else if (unit<400)
{
  charge = unit*1.50;
}
else if (unit<600)
{
  charge = unit*1.80;
}
else if (unit>600)
{
  charge = unit*2.00;
}
  surchg=charge*15/100;
  net=charge+surchg;
  printf("Costumer IDNO: %d\n", id);
  printf("Costumer Name: %s\n", name);
  printf("Unit Consumed: %d\n", unit);
  printf("Amount Charges @Rs. 2.00 per unit:%.2f\n", charge);
  printf("Surcharge Amount:%.2f\n", surchg);
  printf("Net Amount paid by the Costumer:%.2f\n", net);
  return 0; 
}
