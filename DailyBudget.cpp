#include <iostream>
using namespace std;

int main() {
    int inputBudget, DailyBudget, TotalBudget ;
	cout << "Enter Budget: \n";
      cin >> inputBudget ;
      cout << "\n Users Daily Budget:  \n" ;
      cin >> DailyBudget ;
  	TotalBudget = DailyBudget -  inputBudget  ;
      cout << "\nRemaining Budget is  " << TotalBudget ;
  return 0;
}
