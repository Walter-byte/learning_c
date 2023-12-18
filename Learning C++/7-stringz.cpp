#include <iostream>
#include <string.h>
using namespace std;


int main() {

    char a, b, c;
    cout << "Enter 3 letters...";
    cin.get(a).get(b).get(c);
/*

IS THE SAME AS

    a = cin.get();
    b = cin.get();
    c = cin.get();
*/
    cout << a << endl << b << endl << c << endl;

    return 0;
}

// cin >> setw(10) >> word
//cin.getline(t, 10, '\n')