#include <iostream>
using namespace std;

inline float cube(const float s) { return s* s* s;}
int main() {
    float side;
    cin >> side;
    cout << side << cube(side) << endl;
    return 0;
}