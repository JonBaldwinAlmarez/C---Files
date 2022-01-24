#include <iostream>
using namespace std;

int main() {
	int input;
	
  cout << "Enter Number 0 to 5: " ;
  cin >> input;
  
  if(input == 0 ){
  	cout << " Hello World. " ;
  }
  
  else if(input == 1 ){
  	cout << " I am Groot " ;
  }
  else if(input == 2 ){
  	cout << " To the Top " ;
  }
  else if(input == 3 ){
  	cout << " Where is the horizon. " ;
  }
  else if(input == 4 ){
  	cout << " I do not know." ;
  }
  else {
  	cout << " Yeah, I will. " ;
  }
  
  return 0;
}
