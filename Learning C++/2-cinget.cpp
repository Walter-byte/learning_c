#include <cstdio>
#include <iostream>
#include <ostream>
using namespace std;

int main() {
char next;
while ((next = cin.get()) != EOF)  
    if (next != ' ') cout << next;

return 0;
}