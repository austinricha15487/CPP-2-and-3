// Cartwright Industries
// Date: 4/5/2018
// Author: Austin Richards

#include <iostream>
#include <string>

int main()
{
	double grossPay;
	double FWT = 0.80;
	double FICA = 0.08;
	double stateTax = 0.04;
	double netPay;
	std::string employeeName;

	std::cout << "Welcome to weekly payroll, Please enter your employees name." << std::endl;
	std::cin >> employeeName;
	std::cout << "Now please insert how much your employees gross pay is." << std::endl;
	std::cin >> grossPay;
	netPay = (grossPay * FWT) - (grossPay * FICA) - (grossPay * stateTax);
	std::cout << "Okay your employee " << employeeName << " is going to have a net pay of " << netPay << " dollars." << std::endl;

	system("pause");
	return 0;

}
