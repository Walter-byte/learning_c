#include <inttypes.h>
#include <stdio.h>

int main () {

char hola [] = "I am learning C language!";
printf("%s\n", hola);

hola[0] = 'A';
printf("%c\n", hola[0]);
printf("%s\n", hola);

// we have to use the %c format specifier to print a single character.


//another one

char greetings[] = { 'H', 'e', 'l', 'l', 'o', '\0'};
printf("%s\n", greetings);
// \0 is null forthe end of the string.


    return 0;
}