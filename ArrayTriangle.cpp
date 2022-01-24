#include <iostream>
using namespace std;

int main(){
	int input;
	char ListOfLetters[10] = {'A','B','C','D','E','F','G','H','I','J'};
	
	//user enter his/her input here.
	
	cout << "Enter Height of the triangle: ";
	cin >> input;	
	
	//decision here.
	if (input <=10){
	
	//outer loop here. for row.
	for (int a=input; a <= ListOfLetters[a] ;a++)
	{
		cout <<ListOfLetters[a];
		
		//inner loop here. coloum.
		for (int b=1; b <= a ;b++)
		{
			cout <<"*";
		}
		cout << endl;
	}
	}
	
	else{
		cout << "The minimum height is 1, the maximum height is 10 Enter again";
	}
	
	return 0;
}
