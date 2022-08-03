/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) 
{
  float mark1, mark2;
  
  printf("enter the marks of subject 1 : ");
  scanf("%f" , &mark1);
  
  printf("enter the marks of subject 2 : ");
  scanf("%f", &mark2);
  
  printf("the average is : %.2f", (mark1+mark2)/2);
  
  return 0;
}