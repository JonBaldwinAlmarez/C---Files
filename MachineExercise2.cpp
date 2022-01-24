/*

1.	Use two-dimensional array with size 7 columns and 5 rows.
2.	Seat numbers are populated during run-time.
3.	User is asked to input a seat number.
4.	Seat number chosen is replaced by 0.
5.	Program displays a remark “Seat successfully reserved” when reservation is done.
6.	User is not allowed to reserve a previously reserved seat.  Display “Seat is taken” remarks.
7.	User is not allowed to enter an invalid seat number.  Display an error message.
8.	Program continuously loops.

*/

#include <iostream>

using namespace std;

int main ()
{
int array[5][7];
int x;
int y;
int input;


// print.
for (int i = 0; i < 5; i++)
{
	for (int j = 0; j < 7; j++)
	{
		array[i][j] = x++;
	}

}

do
{
			// print out seats.
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 7; j++)
				{
					cout << array[i][j] << "	";
					
				}
			cout << endl;
			}
			//User is asked to input a seat number.
			cout << "Input a seat number: ";
			cin >> input;
//User is not allowed to enter an invalid seat number.  Display an error message.
			if( input > 35)
			{
				cout << "Invalid input!!!";
				cout << endl;
			}

			//Seat number chosen is replaced by 0.

			else
		{

				for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 7; j++)
				{
					if ( array[i][j]== input)
					{
						array [i][j] = 0;
						cout << endl;
						cout << "Seat successfully reserved" << endl;
						x =0;

					}
				}

			}
		// 	User is not allowed to reserve a previously reserved seat.  Display “Seat is taken” remarks.
		if ( x == 1)
		{
			cout << " Seat is taken ";
		}

		}



} while (array[5][7] != 0);

return 0;
}
	