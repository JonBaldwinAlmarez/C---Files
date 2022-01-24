/*
3.	Write a program that will display the value and
 logical address of an uninitialized float array with size twenty (20)
 and a reference pointing to the array.
*/

#include <iostream>

using namespace std;

int main(){
	float MyArray[20];
	int i = (int)MyArray[20];
	int &a = i;
	
	cout << "The value is:	" << i << endl;
	cout << "logical address is:	" << &a;
	
	return 0;
}
