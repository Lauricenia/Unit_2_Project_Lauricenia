#include <stdio.h>
//This program checks the eligibility of admission for a professional course based on a criteria

int main() {
  int math, phy, chem, total, totalMathPhy;
  //ask the user for the marks for each subject
  printf("Input the marks obtained in physics: ");
  scanf("%d", &phy);
  printf("Input the marks obtained in Chemistry: ");
  scanf("%d", &chem);
  printf("Input the marks obtained in Mathematics: ");
  scanf("%d", &math);

  // calculate the total mark for all 3 subject and the total mark for maths and physics marks
  total= math + phy + chem;
  totalMathPhy= math + phy;

 //check if the marks for each subject follow the criteria 
if (math >= 65 && phy >= 55 && chem >= 50)
{
  //if yes, check if it follows the criteria for the total mark of all 3 subjects or for the total marks for maths and physics
  if (total >= 180 || totalMathPhy >= 140)
  {
    //if it follows one of the criteria for the total marks, then the candidate is eligible
    printf("The candidate is eligible for admission");
  }
}  
// if the subject marks are not within the set range, then the candidate is not eligible regardless the total marks
else
{
  printf("The candidate is not eligible for admission");
}
  return 0; 
}
