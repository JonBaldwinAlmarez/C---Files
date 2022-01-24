#include <iostream>



using namespace std;

class Payslip
{

string name, grade;
float salary, oth , otp , gross , net , tax , sss , pagibig , philhealth;

public:
void details()
	{
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter salary: ";
		cin >> salary;
		cout << "Enter Over Time Hours: ";
		cin >> oth;

		sss = 500;
		pagibig = 200;
		philhealth = 100;

		otp = oth * ( salary * 0.01);
		gross = salary + otp;
		net = gross - tax - sss - pagibig - philhealth;

		if(salary >= 10000 && salary < 20000 )
		{
			if(salary >= 10000 && salary < 15000)
			{
				grade = "A";
			}
			else if(salary >=15000 && salary < 20000)
			{
				grade = "B";
			}
			
			tax = gross * 0.1;
				
		}
		else if(salary >= 20000 && salary < 30000)
		{
			if(salary >= 20000 && salary < 25000)
			{
				grade = "A";
			}
			else if(salary >= 25000 && salary < 30000)
			{
					grade = "B";
			}
			tax = gross * 0.15;
			
		}
		else if(salary >= 30000 && salary < 40000)
		{
			if(salary >= 30000 && salary < 35000)
			{
				grade = "A";
			}
			else if(salary >= 35000 && salary < 40000)
			{
				grade = "B";
			}
			tax = gross * 0.2;
		}
		else if (salary >= 40000 && salary < 50000)
		{
			if (salary >= 40000 && salary < 50000)
			{
				grade = "A";
			}
			else if (salary >= 45000 && salary < 50000)
			{
				grade = "B";
			}
			tax = gross * 0.25;
		}
		else if (salary >= 50000)
		{
			
			if (salary >= 50000 && salary < 55000)
				{
					grade = "A";
				}
			else if (salary >= 55000)
				{
					grade = "B";
				}
				tax = gross * 0.3;
				
		}
		else
		{
			cout << "Wrong input, Basic salary should not be less than 10,000.";
		}

	cout << endl ;
	}

	void display()
			
		{
			cout << "--------------------------------------" << endl;
			cout << "Employee Name  	:  "  <<name << endl;
			cout << "Basic Salary		: "  << salary << endl;
			cout << "Pay Grade		: " <<grade << endl;
			cout << "No. of OT Hours	: " <<oth << endl;
			cout << "OT Pay		: " <<otp << endl;
			cout << "Gross Pay		: " << gross << endl;
			cout << "Withholding Tax	: " <<tax << endl;
			cout << "Net Pay		: "  << net << endl;
		}	
};

int main()
{
Payslip p;
p.details();
p.display();

return 0;
}
