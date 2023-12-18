#include <iostream>
using namespace std;

long int fib(long int);
int main() {

    long int r;
    int n;
    cout << "Enter int value..." << endl;
    cin >> n;

    r = fib(n);
    cout << r << endl;
    
    
        return 0;
}

long int fib(long int n) {
    if(n == 1 || n == 2)
        return 1;
    else
     return (fib(n - 1) + fib(n - 2));
}