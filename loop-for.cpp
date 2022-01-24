#include <iostream>
using namespace std;

int main(){
	int input;
	
	cout << "Enter Height of the triangle: ";
	cin >> input;
	
	for (int a=1; a <= input ;a++)
	{
		for (int b=1; b <= a ;b++)
		{
			cout <<"*";
		}
		cout << endl;
	}
	return 0;
}
