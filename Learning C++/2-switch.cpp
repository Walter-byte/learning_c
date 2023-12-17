#include <iostream>
#include <ostream>
using namespace std;

int main () {
unsigned int n;
cin >> n;
switch (n) {
case 0:
case 1:
case 2:
    cout << "Less than three" << endl;
    break;
case 3:
    cout << "Eq to three" << endl;
    break;
default:
    cout << "greater than three" << endl;
}

    return 0;
}