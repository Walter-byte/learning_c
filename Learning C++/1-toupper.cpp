#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

    char c1, c2;
        cout << "Enter a lowercase letter:";
    cin >> c1;
    c2 = toupper(c1);
    cout << c2 << endl;

    return 0;
}