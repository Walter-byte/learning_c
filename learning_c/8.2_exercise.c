#include <stdio.h>

int main() {
    int dice = 1;
    while (dice <= 6) {
        if (dice < 6) {
            printf("If you need coffee\n");
        } else {
        printf("GO ZHAF\n");
        }
    dice = dice + 1;
    }

    return 0;
}