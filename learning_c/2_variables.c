#include <stdio.h>

int main() {
  // Create variables
  int myNum = 15;              // Integer (whole number)
  float myFloatNum = 55.65479;     // Floating point number
  char myLetter = 'F';         // Character


/* all vars must have identifiers with unique names

    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (such as int) cannot be used as names
*/

/*
If you don't want others (or yourself) to change existing variable values, you can use the const keyword.

This will declare the variable as "constant", which means unchangeable and read-only

*/
const float PI = 3.1415;

//Exercise: Calculate the Area of a Rectangle:
  int length = 4;
  int width = 6;
  int area;
  // calc the area of a rectangle
  area = length * width;


  // Print variables
  printf("%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);
  printf("MY FAV NUM IS: %d\n", myNum);
  printf("my number is %d and my letter is %c",myNum, myLetter);

  printf("Exercise resaults are:\n");
  printf("Length is: %d\n", length);
  printf("Width is: %d\n", width);
  printf("Area of the rectangle is: %d\n", area);
  printf("Pie is: %.4f\n", PI);

  return 0;
}