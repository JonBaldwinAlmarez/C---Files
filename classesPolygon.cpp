// 3.	Write a class that will represent Polygon. Consider the name, number of sides and color.

#include <iostream>

using namespace std;

class Polygon{
	public:
		void Name(){
			cout << "Name: Hexagon" << endl;
		}
		
		void Sides(){
			cout << "Sides: 6" << endl;
		}
		
		void Color(){
			cout << "Color: Blue" << endl;
		}
		
	
};


int main(){
	
	Polygon TheName;
	TheName.Name();
	
	Polygon TheSide;
	TheSide.Sides();
	
	Polygon TheColor;
	TheColor.Color();
	
	
	return(0);
}
