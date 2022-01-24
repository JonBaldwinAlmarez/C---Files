#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int input[4];
	
	for(int i=1; i<=5; i++){
		cout << "Enter 5 Integer: ";
		cin >> input[i];
	}
	for(int i=1; i<=5; i++){
		cout << "\nNumbers are: " << input[i];
	}
	
	return 0;
}
