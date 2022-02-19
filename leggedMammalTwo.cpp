/* 1.	Write a class that extends the LeggedMammal class from the previous laboratory exercise.
  The class will represent a Dog.  Consider the breed, size and is registered. 
   Initialize all properties of the parent class in the new constructor.  
   This time, promote the use of accessors and mutators for the new properties. 
Instantiate a Dog object in the main function and be able to set the values of the properties of the Dog object using the mutators.
  Display all the properties of the Dog object using the accessors. */


#include <iostream>
using namespace std;

class Dog {
  private:
    int Size;
    string Breed;
    string Registered;

  public:
    void setSize(int s) {
      Size = s;
    }
    void setBreed(string t) {
      Breed = t;
    }
    void setRegistered(string u) {
      Registered = u;
    }
    int getSize() {
      return Size;
    }
    string getBreed() {
      return Breed;
    }
    string getRegistered() {
      return Registered;
    }
};

int main() {
  Dog myObj;
  myObj.setSize(5);
  cout << "Size: " << myObj.getSize() << endl;
  
  Dog myObj2;
  myObj2.setBreed("Azkal");
  cout << "Breed: " << myObj2.getBreed() << endl;
  
  Dog myObj3;
  myObj3.setRegistered("Tagum");
  cout << "Registered: " <<myObj3.getRegistered() << endl;
  return 0;
}

