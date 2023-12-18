#include <iostream>
#include <string.h>
using namespace std;

int main() {

    char str1= "Books are good friends";
    int c= strlen(str1);
    int ts= c- 4;
    int tl= c+ 6;

    cout.write(str1, c) <<"\n";
    cout.write(str1, ts) <<"\n";
    cout.write(str1, tl) <<"\n";



    return 0;
}

// FAILED COMPILING.