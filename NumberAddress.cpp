/* 
1.	Write a program that will display the value and logical address of an integer variable with an initial value of 900.
*/

#include <iostream>

using namespace std;

int main(){
	int MyNumber = 900;
	int &NumberAddress = MyNumber;
	
	cout << "The value of MyNumber is: "  << MyNumber << endl;
	cout << "The Address of MyNumber is: " << &NumberAddress;
	
	return 0;
}
