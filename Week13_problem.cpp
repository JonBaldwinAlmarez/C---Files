/*
Write a program that will change the value of an integer variable with initial value of 654,321 to 27,946 
without directly assigning a value to the variable. 
You cannot create any pointers or references in the main function.
*/

#include <iostream>

using namespace std;



int main(){

	int MyNumOne = 654321;
		int* MyNumTwo = &MyNumOne;
		 
		 cout << " The value of MyNumOne is " << MyNumOne << endl;
		 cout << " The value of MyNumTwo is " << *MyNumTwo << endl;
	
		MyNumOne = 27946;
	
		cout << " The value of MyNumOne is " << MyNumOne << endl;
		cout << " The value of MyNumTwo is " << *MyNumTwo << endl;
	
	return 0;
}
