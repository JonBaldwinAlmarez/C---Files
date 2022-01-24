/*
1.	Write a program that can divide six non-zero integers (two integers per division)
 from the user and display the result to the user. Create a function that will perform the division operation
. Display only the non-decimal part of the quotient.
*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
	
	void divide(int input[6]){
		int ansOne,ansTwo,ansThree;
		
		ansOne = input[0] / input[1];
		ansTwo = input[2] / input[3];
		ansThree = input[4] / input[5];
		
		cout << "Answers are: " << ansOne << endl ;
		cout << "Answers are: " << ansTwo << endl ;
		cout << "Answers are: " << ansThree << endl ;
		
	}
	

	
	int main (){
		int input[6];
		
		for ( int i = 0; i <= 5; i++){
			cout << "Enter Number: ";
			cin >> input[i];
			
		}
		
		divide (input);
		
		
		return 0;
	}
