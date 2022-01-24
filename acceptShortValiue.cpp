// 2.	Write a program that will accept a short value from 10 to 99 and display them per digit (separated by a space).


#include <iostream>

using namespace std;

int main(){
	short input;
	int rem;
	int n;
	
	
	cout << "Enter a Number 10 to 99: ";
	cin >> input;
	
	n = input;
	
	while(input != 0){
		
		
		n = input / 10;
		cout << " " << n;
		
		rem = input %10;
		cout << " " << rem;
		
		input = 0;
	}
	
	
	return (0);
}
