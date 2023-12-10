#include <stdio.h>

int main() {
  
/* The data type specifies the size and type of information the variable will store.
int : 2/4 bytes, numbers without dec
float: 4 bytes, fractional numbers, 6-7 deciaml
double: 8 bytes, sufficent for storing 15 dec. digits
char: 1 byte, single chr/letter/num or ASCII values.
*/

/*
format specifiers
%d or%i for  int
%f  for      float
%lf for      double
%c  for      char
%s  for      strings
*/

  int myNum = 5;               // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  char myLetter = 'D';         // Character
  
  // Print variables
  printf("%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);
  return 0;
}