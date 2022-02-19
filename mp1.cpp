#include <iostream>
#include <string>
#include <bits/localefwd.h>
#include <cmath>

using namespace std;

int main(){
    string StudentName, ProgramCourse;
    int YearLevel, NumberOfUnits;

    // input here 

    cout << "Student Name: ";
    getline(cin, StudentName);
    cout << "Enter Program/Course: ";
    getline(cin, ProgramCourse);
    cout << "Enter Year Level: ";
    cin >> YearLevel;
    cout << "Enter number of Units: ";
    cin >> NumberOfUnits;

    // Output here

    if(YearLevel == 1) {
        cout << "\n Year Name : Freshmen \n";
        cout << "\n No. of Unit: \n" << NumberOfUnits ;

        int  tuitionFee;
        tuitionFee = NumberOfUnits * 1500;

        cout << "\n Tuition Fee : \n" << tuitionFee ;
        
        int downPayment;
        downPayment = tuitionFee * 0.3;

         cout << "\n Down Payment : \n" << downPayment ;

         int balance;
         balance = tuitionFee - downPayment;

          cout << "\n Balance : \n" << balance ;

    }

    else if (YearLevel == 2) {
        cout << "\n Year Name : Sophomore \n";
        cout << "\n No. of Unit: \n" << NumberOfUnits ;

        int  tuitionFee;
        tuitionFee = NumberOfUnits * 1800;

        cout << "\n Tuition Fee : \n" << tuitionFee ;
        
        int downPayment;
        downPayment = tuitionFee * 0.3;

         cout << "\n Down Payment : \n" << downPayment ;

         int balance;
         balance = tuitionFee - downPayment;

          cout << "\n Balance : \n" << balance ;

    }

       else if (YearLevel == 3) {
        cout << "\n Year Name : Junior \n";
        cout << "\n No. of Unit: \n" << NumberOfUnits ;

        int  tuitionFee;
        tuitionFee = NumberOfUnits * 2000;

        cout << "\n Tuition Fee : \n" << tuitionFee ;
        
        int downPayment;
        downPayment = tuitionFee * 0.3;

         cout << "\n Down Payment : \n" << downPayment ;

         int balance;
         balance = tuitionFee - downPayment;

          cout << "\n Balance : \n" << balance ;

    }

       else if (YearLevel == 4) {
        cout << "\n Year Name : Senior \n";
        cout << "\n No. of Unit: \n" << NumberOfUnits ;

        int  tuitionFee;
        tuitionFee = NumberOfUnits * 2300;

        cout << "\n Tuition Fee : \n" << tuitionFee ;
        
        int downPayment;
        downPayment = tuitionFee * 0.3;

         cout << "\n Down Payment : \n" << downPayment ;

         int balance;
         balance = tuitionFee - downPayment;

          cout << "\n Balance : \n" << balance ;
		    return 0;
    }

}
