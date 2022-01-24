/*
3.	Write a program that will display the words "This is it!"
 from a variablewithout assigning any characters to the variable.
 You cannot use cout << "This is it!" << endl; or any variants of it.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string WordTwo = "This is it!";  // A string variable
  string* tii = &WordTwo;  // A pointer variable that stores the address of food

  // Output the value of food
  cout << WordTwo << "\n";

  // Output the memory address of food
  cout << &WordTwo << "\n";

  // Output the memory address of food with the pointer
  cout << tii << "\n";
  return 0;
}

