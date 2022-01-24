/*
2.	Write a program that will display the value and logical address 
of an uninitialized character array with size ten (10) and a pointer pointing to the array.
 (Hint: you may need to perform some casting.)
*/

#include <iostream>

using namespace std;

int main(){
	char MyArray[10];
	int i = (int)MyArray[10];
	int &a = i;
	
	cout << "The value is:	" << i << endl;
	cout << "logical address is:	" << &a;
	
	return 0;
}
