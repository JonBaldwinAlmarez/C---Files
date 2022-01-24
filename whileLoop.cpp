#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int input;
    int i;
    int j;

    cout << "Enter Height of the triangle: ";
    cin >> input;

    i=1;

    while (i <= input)
    {  
        j=1;
        while(j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl ;
        i++;
    }
}

