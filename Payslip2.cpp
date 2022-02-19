#include <iostream>

using namespace std;

class Payslip{
	private:
		string name;
		float pay_grade, basic_salary, overtime_hours, overtime_pay, gross_pay, net_pay, withholding_tax;
	
	public:
		void setname(string name){
			name = name;
		}	
		string getname(){
			return name;
		}
//1	overtime_hours	
		float setpay_grade(float pay_grade){
			pay_grade = pay_grade;
		}				
		float getpay_grade(){
			return pay_grade;
		}
//2 overtime_hours
		float setbasic_salary(float basic_salary){
			basic_salary = basic_salary;
		}		
		float getbasic_salary(){
			return basic_salary;
		}
//3 overtime_hours
		float setovertime_hours(float overtime_hours){
			overtime_hours = overtime_hours;
		}		
		float getovertime_hours(){
			return overtime_hours;
		}
//4 overtime_pay
		float setovertime_pay(float overtime_pay){
			overtime_pay = overtime_pay;
		}		
		float getovertime_pay(){
			return overtime_pay;
		}
//5 gross_pay
		float setgross_pay(float gross_pay){
			gross_pay = gross_pay;
		}	
		float getgross_pay(){
			return gross_pay;
		}
//6 net_pay
		float setnet_pay(float net_pay){
			net_pay = net_pay;
		}	
		float getnet_pay(){
			return net_pay;
		}
//7 withholding_tax
		float setwithholding_tax(float withholding_tax){
			withholding_tax = withholding_tax;
		}	
		float getwithholding_tax(){
			return withholding_tax;
		}
	
	
};

int main(){
	
	
	return 0;
}
