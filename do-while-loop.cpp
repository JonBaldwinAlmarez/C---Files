#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int input;

    cout << "Enter Height of the triangle: ";
    cin >> input;

	do{
		int i = input;
		while(i >= 1){
			int j=i;
			while( j>0 ){
				
				cout << "* ";
				j--;
				
			}
		i--;
		cout << endl;
		}
    }
    while (input > 0);
    return 0;
}
