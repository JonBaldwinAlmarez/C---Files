/*
3.	Write a program that will display the nth Fibonacci number.
 Create a function that will generate the nth Fibonacci number.
 Fibonacci numbers are numbers from the Fibonacci sequence which follows the pattern of 
 1, 1, 2, 3, 5, 8, 13, 21, 33, 54�
*/



#include <iostream>
#include <cstdlib>
#include <cmath>


using namespace std;

void fibonacci( int n ){
	int t1 = 0, t2 = 1, nextTerm = 0;
	while(nextTerm <= n) {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
}

int main() {
    int t1 = 0, t2 = 1, nextTerm = 0, n;

    cout << "Enter a positive number: ";
    cin >> n;

    // displays the first two terms which is always 0 and 1
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    nextTerm = t1 + t2;

   fibonacci(n);
   
    return 0;
}

