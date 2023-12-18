#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname) {
  cout << fname << " Kalamchi\n";
}

int main() {
  myFunction("Ali");
  myFunction("Vali");
  myFunction("Dali");
  return 0;

}

/*

When a parameter is passed to the function, it is called an argument.
So, from the example above: kalamchi is a parameter, while Ali gil are arguments.


A parameter with a default value, is often known as an "optional parameter". 

*/