#include <iostream>
using namespace std;
 
int main()
{
    int input[6];
    int size, j, i, temp;
 
	//This code ask user for 6 input.
	for(int i=1; i<=6; i++){
		cout << "Enter 6 Integer: ";
		cin >> input[i];
	}
	size = 6;
 
    //Sorting an array in ascending order
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            //If there is a smaller element found on right of the array then swap it.
            if(input[j] < input[i])
            {
                temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
    //Printing the sorted array in ascending order
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(i=0; i<size; i++)
    {
        cout<<input[i]<<endl;
    }
 
    return 0;
}
