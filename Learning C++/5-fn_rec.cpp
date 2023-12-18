#include <iostream>
using namespace std;

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);              //this is a template i guess. Must remember this fn.
  } else {
    return 0;
  }
}

int main() {
  int result = sum(10);
  cout << result << "\n";
  return 0;
}

// In tabee aadade >10 ra ba ham jam mikonad va export mikonad.