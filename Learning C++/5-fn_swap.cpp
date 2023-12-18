#include <iostream>
using namespace std;

void swapNums(int &x, int &y) {
  int z = x;                        //we use third person for remembering the value.
  x = y;                            //giving the value to the sec person.
  y = z;                            //taking back the first value. that is it !
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";          //we have not called the function yet.
  cout << firstNum << secondNum << "\n";

  swapNums(firstNum, secondNum);    //now the fn called and action!

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}
