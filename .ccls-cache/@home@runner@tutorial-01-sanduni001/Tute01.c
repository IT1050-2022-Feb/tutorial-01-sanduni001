/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int  m1,m2;
  float ave;

  printf("enter the mark1 :  ");
  scanf("%d",&m1);

  printf("enter the mark2 :  ");
  scanf("%d",&m2);


  ave = (m1 + m2)  / 2.00;

  printf("average is %.2f",ave);





  
  
  return 0;
}

