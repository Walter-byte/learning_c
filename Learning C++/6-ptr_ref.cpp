#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Polo";
  string* ptr = &food;

  // Output the value of food
  cout << food << "\n";

  // Output the memory address of food
  cout << &food << "\n";

  // Access the memory address of food and output its value
  cout << *ptr << "\n";
  
  // Change the value of the pointer
  *ptr = "Ghormesabzi";
  
  // Output the new value of the pointer
  cout << *ptr << "\n";
  
  // Output the new value of the food variable
  cout << food << "\n";
  return 0;
}

/*

Note that the * sign can be confusing, as it does two different things in our code:

    When used in declaration (string* ptr), it creates a pointer variable.
    When not used in declaration, it act as a dereference operator.

*/