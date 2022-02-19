/* 
2.	Write a class that extends the Person class from the previous laboratory exercise. 
 The class will represent a Student. Consider the academic program, year in college and enrolled university. 
 Initialize all the properties of the parent class in the new constructor.
   This time, promote the use of accessors and mutators for the new properties.
   Instantiate a Student object in the main function and be able to set the values of the properties of the Student object using the mutators.
  Display all the properties of the Student object using the accessors.
 */


#include <iostream>
using namespace std;

class Person {
  private:
    int Age;
    string Name;
    string Address;

  public:
    void setAge(int s) {
      Age = s;
    }
    void setName(string t) {
      Name = t;
    }
    void setAddress(string u) {
      Address = u;
    }
    int getAge() {
      return Age;
    }
    string getName() {
      return Name;
    }
    string getAddress() {
      return Address;
    }
};

int main() {
  Person myObj;
  myObj.setAge(78);
  cout << "Age: " << myObj.getAge() << endl;
  
  Person myObj2;
  myObj2.setName("Joe Biden");
  cout << "Name: " << myObj2.getName() << endl;
  
  Person myObj3;
  myObj3.setAddress("Washington D.C");
  cout << "Address: " <<myObj3.getAddress() << endl;
  return 0;
}

