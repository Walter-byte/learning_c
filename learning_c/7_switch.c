#include <stdio.h>

int main() {
  int day = 4;
  

// Instead of writing many if..else statements, you can use the switch statement.
  switch (day) {
    case 1:
      printf("Monday");
      break;
    case 2:
      printf("Tuesday");
      break;
    case 3:
      printf("Wednesday");
      break;
    case 4:
      printf("Thursday");
      break;
    case 5:
      printf("Friday");
      break;
    case 6:
      printf("Saturday");
      break;
    case 7:
      printf("Sunday");
      break;
      default:
      printf("default returns some code if there is no case match");
  }
    //break "ignores" the execution of all the rest of the code in the switch block.
    // The default must be used as the last statement in the switch, and it does not need a break.
  return 0;
}
