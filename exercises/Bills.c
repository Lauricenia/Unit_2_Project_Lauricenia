#include <stdlib.h>
#include <stdio.h>
//This program calculates and prints the electricity bill of a given customer

int main() {
  int id,unit;
  float charge, surchg, net;
  char name[50];
  //ask the user for the customer details
  printf("Enter your id, name and unit consumed in the same order\n");
  scanf("%d %s %d", &id, name, &unit);


 //if the unit consumed is less than 100, it is invalid (exit)
if (unit<100)
 {
   printf("ERROR. Bill cannot be less than ¥100.");
   exit(0);
 }
 //if it is less than 199 but bigger than 100
else if (unit<199)
{
  charge = unit* 1.20;
}
//if it is less than 400 but bigger than 199
else if (unit<400)
{
  charge = unit*1.50;
}
//if it is less than 600 but bigger than 400
else if (unit<600)
{
  charge = unit*1.80;
}
//if it is bigger than 600
else if (unit>600)
{
  charge = unit*2.00;
}

//calculate the surcharge and net amount using the charge value obtained from a condition
  surchg=charge*15/100;
  net=charge+surchg;

//print the output
  printf("Costumer IDNO: %d\n", id);
  printf("Costumer Name: %s\n", name);
  printf("Unit Consumed: %d\n", unit);
  printf("Amount Charges @Rs. 2.00 per unit:%.2f\n", charge);
  printf("Surcharge Amount:%.2f\n", surchg);
  printf("Net Amount paid by the Costumer:%.2f\n", net);
  return 0; 
}

//links:
//  https://forgetcode.com/c/977-exit-terminate-the-program
// https://stackoverflow.com/questions/1343890/rounding-number-to-2-decimal-places-in-c
//   https://www.programiz.com/c-programming/c-input-output
