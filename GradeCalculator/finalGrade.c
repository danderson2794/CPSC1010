/* The purpose of this program is to compute what you need to score on the
    final exam in order to make an A in the class. */

#include <stdio.h>

int main (){
  float assignment1, assignment2, assignment3, lab, q_zb, test1, test2;
  float avg, finalExamNeeded;
  char letterGrade;

  printf("\n\nEnter grade of assignment 1: ");
  scanf("%f", &assignment1);
  assignment1 = assignment1 * .10;

  printf("\n\nEnter grade of assignment 2: ");
  scanf("%f", &assignment2);
  assignment2 = assignment2 * .10;

  printf("\n\nEnter grade of assignment 3: ");
  scanf("%f", &assignment3);
  assignment3 = assignment3 * .10;

  printf("\n\nEnter grade of lab: ");
  scanf("%f", &lab);
  lab = lab * .20;

  printf("\n\nEnter grade of quizes and zybooks: ");
  scanf("%f", &q_zb);
  q_zb = q_zb * .10;

  printf("\n\nEnter grade of Test 1: ");
  scanf("%f", &test1);
  test1 = test1 * .10;

  printf("\n\nEnter grade of Test 2: ");
  scanf("%f", &test2);
  test2 = test2 * .10;

  avg = (assignment1 + assignment2 + assignment3 + lab + q_zb + test1 + test2) /
  .80;


  printf("Average is %.2f\n", avg);

  printf("What letter grade are you shooting for (use uppercase)?  ");
  scanf(" %c", &letterGrade);

  switch (letterGrade) {
    case 'A':
    case 'a':
      finalExamNeeded = (89.5 - (avg * .8)/ .2);
      if (finalExamNeeded > 100) {
        printf("An A is not final.\n");
      }
      else
      printf("I need a %.2f on the final to get an A\n",
      finalExamNeeded);
      break;
    case 'B':
    case 'b':
      finalExamNeeded = (79.5 - (avg * .8)/ .2);
      printf("I need a %.2f on the final to get an A\n",
      finalExamNeeded);
      break;
    case 'C':
    case 'c':
      finalExamNeeded = (69.5 - (avg * .8)/ .2);
      printf("I need a %.2f on the final to get an A\n",
      finalExamNeeded);
      break;
  }



  return 0;
}
