#include <iostream>
using namespace std;

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int z = myFunction(10, 12);
  cout << z;
  return 0;
}