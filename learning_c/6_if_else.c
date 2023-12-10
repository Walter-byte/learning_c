#include <stdio.h>

int main() {
  int time = 20;
  if (time < 12) {
    printf("Guten Morgen.\n");
  } else if (time < 20) {
    printf("Guten Tag!\n");
  } else {
    printf("Guten Abend.\n");
  }
  return 0;

  // Instead of Writing IF/ELSE we can use this syntax
  // variable = (condition) ? expressionTrue : expressionFalse;
  
}