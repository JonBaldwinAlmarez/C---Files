/* 1.	Write a class that will represent a LeggedMammal. Consider the number of legs, kind of fur, presence of tail. */

// main function of a class is to group similar function. 
#include <iostream>

using namespace std;

class LeggedMammal{ // this is class named. LeggedMammal
	public: // class public so I can access it out side the class
		void mammals(){ // this is function inside of the class. down below is its code block.
			cout << "Name: Dog" << endl;	
			cout << "Number of leg: 4 Legs" << endl;
			cout << "Kind(s) of fur: Undercoat, guard hair and whiskers." << endl;
			cout << "Number of tails: 1" << endl;
			cout << endl;
		}
		
		void fish(){
			cout << "Name: Carp" << endl;	
			cout << "Number of Fins: 4 fins" << endl;
			cout << "Kind(s) of scale: under armour" << endl;
			cout << "Number of tails: 1" << endl;
			cout << endl;
		}
	
};


int main(){
	LeggedMammal animal; // declare a class the way you declare a variable. syntax ( NameOfTheClass NameOfTheObject in that class ).
	animal.mammals(); // this line of code is the object. you access a class you named it animal then you call the function mammal.
	
	LeggedMammal Fishes;
	Fishes.fish();
		
	
	return(0);
}





/*

#include <iostream>

using namespace std;

class LeggedMammal{ // this is class named. LeggedMammal
	public: // class public so I can access it out side the class
		void mammals(){ // this is function inside of the class. down below is its code block.
			cout << "Name: Dog" << endl;	
			cout << "Number of leg: 4 Legs" << endl;
			cout << "Kind(s) of fur: Undercoat, guard hair and whiskers." << endl;
			cout << "Number of tails: 1" << endl;
			cout << endl;
		}
		
		void fish(){
			cout << "Name: Carp" << endl;	
			cout << "Number of Fins: 4 fins" << endl;
			cout << "Kind(s) of scale: under armour" << endl;
			cout << "Number of tails: 1" << endl;
			cout << endl;
		}
	
};


int main(){
	LeggedMammal animal; // declare a class the way you declare a variable. syntax ( NameOfTheClass NameOfTheObject in that class ).
	animal.mammals(); // this line of code is the object. you access a class you named it animal then you call the function mammal.
	
	LeggedMammal Fishes;
	Fishes.fish();
		
	
	return(0);
}


*/
