// 2.	Write a class that will represent a Person. Consider the name, address, gender, age and occupation.

#include <iostream>

using namespace std;

class PersonalInfo{
	public:
		void Name(){
			cout << "Name: Joe Biden" << endl;
		}
		
		void Address(){
			cout << "Address: White house, Washington D.C" << endl;
		}
		
		void Gender(){
			cout << "Gender: Male" << endl;
		}
		
		void Age(){
			cout << "Age: 78" << endl;
		}
		
		void Occupation(){
			cout << "Occupation: President Of the United States Of America" << endl;
		}
	
};


int main(){
	PersonalInfo TheName;
	TheName.Name();
	
	PersonalInfo TheAddress;
	TheAddress.Address();
	
	PersonalInfo TheGender;
	TheGender.Gender();
	
	PersonalInfo TheAge;
	TheAge.Age();
	
	PersonalInfo TheOccupation;
	TheOccupation.Occupation();
	
	
	return(0);
}
