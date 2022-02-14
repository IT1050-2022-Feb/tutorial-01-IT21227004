/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  // variables declaration
  int mark1, mark2, sum;
  float average;

  printf("Enter your subject marks : ");
  scanf("%d", &mark1);

  printf("\nEntre your subject marks : ");
  scanf("%d", &mark2);

  sum = mark1 + mark2; // calculate summation

  average = sum / 2.0; // calculate average

  printf("\nYour average mark is %.2f", average);
  
  return 0;
}

