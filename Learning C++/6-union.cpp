/* #include <iostream>
#include <ostream>
#include <string>
using namespace std;

union Myca {
    string brand;
    int year;
};
int main() {
    Myca car;
    car.brand = "Benz";
    car.year = 1998;

    cout << "integer val is:" << car.brand << endl;
    cout << "float val is:" << car.year << endl;

    return 0;
}

*/