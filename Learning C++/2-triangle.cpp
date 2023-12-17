#include <iostream>
using namespace std;

int main() {
float a,b,c;
cout << "Enter numbers" << endl;
cin >> a >> b >> c;

if ((a < b + c) && (b < a + c) && (c < a + b)){
cout << "It is a triangle";
}
else
cout << " Not triangle\n";







    return 0;
}