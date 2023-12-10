#include <stdio.h>

int main() {
  int i = 0;
  
  while (i < 10) {
    printf("%d\n", i);
    i++;
  }

 /* Do not forget to increase the variable used in the condition (i++),
 otherwise the loop will never end! */ 

  return 0;
}