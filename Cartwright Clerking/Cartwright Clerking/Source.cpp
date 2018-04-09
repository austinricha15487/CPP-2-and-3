// Cartwright Industries
// Date: 4/5/2018
// Author: Austin Richards

#include <iostream>
#include <string>

int main()
{
	double normalPay;
	double overTimePay=0;
	double hoursWorked;
	double hourlyPay = 10.00;
	double grossPay;
	double FWT = 0.80;
	double FICA = 0.08;
	double stateTax = 0.04;
	double netPay;
	std::string employeeName;

	std::cout << "Welcome to weekly payroll, Please enter your employees name." << std::endl;
	std::cin >> employeeName;
	std::cout << "Now please insert how many hours your employee has worked." << std::endl;
	std::cin >> hoursWorked;
	/*normalPay = hourlyPay * hoursWorked;*/
	if (hoursWorked <= 40)
	{
		normalPay = hoursWorked * hourlyPay;

	}
	if(hoursWorked > 40)
	 {
		 overTimePay = (hourlyPay * 1.5)*(hoursWorked - 40);
		 normalPay = hourlyPay * 40;
		 grossPay = normalPay + overTimePay;
		 
	 }
	 
	
	std::cout << " Your employee made " << grossPay << std::endl;
	netPay = (grossPay * FWT) - (grossPay * FICA) - (grossPay * stateTax);
	std::cout << "Okay your employee " << employeeName << " is going to have a net pay of " << netPay << " dollars." << std::endl;

	system("pause");
	return 0;

}
