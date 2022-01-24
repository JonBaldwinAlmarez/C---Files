#include <iostream>
#include <cmath>

using namespace std;
// Functions of Total_Payment
int Total_Payment(int rate_per_day ,float Number_of_days){
	
	int Total_Payment_value = rate_per_day * Number_of_days;
	
	return Total_Payment_value;
}
// Functions of Down_payment
int Down_payment(int Total_Payment_value){

	int Down_payment_value = Total_Payment_value * 0.40;
	
	return Down_payment_value;
}

int main(){

	string Customer_Name;
	int Age;
	int Number_of_guests;
	float Number_of_days;
	int rate_per_day;
	int Total_Payment_value;

	int balance;

	// Input	
	cout << "Customer Name: " << endl;
	getline(cin, Customer_Name);
	
	cout << "Age: " << endl;
	cin >> Age;
	
	cout << "Number of guests: " << endl;
	cin >> Number_of_guests;
	
	cout << "Number of days: " << endl;
	cin >> Number_of_days;
	
if(Age > 17){
	

	if (Number_of_guests == 1){
		rate_per_day = 1000;
	}
	
	else if(Number_of_guests == 2){
		rate_per_day = 1800;
	}
	
	else if(Number_of_guests == 3){
		rate_per_day = 2700;
	}
	
	else if(Number_of_guests == 4){
		rate_per_day = 3600;
	}
	
	else {
		rate_per_day = 4500;
	}

// Output

	cout << "Customer Name	: " << Customer_Name << endl;
	cout << "Age		: " << Age << endl;
	cout << "Number of guests: " << Number_of_guests << endl;
	cout << "Number of days	: " << Number_of_days << endl;

	cout << "Total Payment	: " << Total_Payment(rate_per_day, Number_of_days) << endl;
	
	Total_Payment_value = Total_Payment(rate_per_day, Number_of_days);
	cout << "Down Payment	: " << Down_payment(Total_Payment_value) << endl;
	
	balance = Total_Payment_value - Down_payment(Total_Payment_value);
	cout << "Balance		: " << balance << endl;

	}
	
	else{
		cout << " User is not allowed to enter the age of 17 and below ";
	}
	
	return (0);
}
