#include <stdio.h>

int main() {
/*When you know exactly how many times you want to loop through a block of code
use the for loop instead of a while loop:


for (statement 1; statement 2; statement 3)
Statement 1 is executed (one time) before the execution of the code block.

Statement 2 defines the condition for executing the code block.

Statement 3 is executed (every time) after the code block has been executed.
*/

    int number = 2;
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", number, i, number * i);
    }
    return 0;
}