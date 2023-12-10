#include <stdio.h>
#include <string.h>

main() {

char streins[25] = "just a test";
char strzwei[] = "anotherone";

//strcat(streins, strzwei);
//combine two strings 2 --> 1

//strcpy(strzwei, streins);
//copy str1 to str2


printf("%d\n", strlen(streins));
printf("%d\n", sizeof(streins));
//printf("%s\n", streins);
//rintf("%s\n", strzwei);
printf("%d\n", strcmp(streins, strzwei)); // strcmp Compare Str1 and Str2 and prnt the result. 0 means the equal.

    return 0;
}