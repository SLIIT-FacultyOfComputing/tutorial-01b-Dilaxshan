/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float m1,m2;
  float avg;

  printf("Enter the Mark1 :");
  scanf("%f",&m1);
  printf("Enter the Mark2 :");
  scanf("%f",&m2);

  avg = ( m1 + m2 )/2;

  printf("Average of the two mark : %.2f",avg);

  return 0;
}

