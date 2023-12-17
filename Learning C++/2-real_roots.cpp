#include <cmath>
#include <iostream>
#include <math.h>

using namespace std;

int main() {

   float a,b,c,d,x1,x2;
   // clrscr() // what the fack is this !!
   cout << endl;
   cin >> a >> b >> c;
   d = b * b - 4.0 * a * c; //delta
   if (d<0) {
   cout << "No real roots" << endl;
   }
   else {
   x1 = (-b + sqrt(d)) / (2.0 * a);
   x2 = (-b - sqrt(d)) / (2.0 * a);
   cout << "x1 = " << x1 << "x2 = " << x2 << endl; //why ??
   }

    
    
    
    return 0;
}