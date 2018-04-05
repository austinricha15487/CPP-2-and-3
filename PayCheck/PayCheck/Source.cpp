//Paycheck Calculator
//Date: 4/5/2018
//Author: Austin Richards

#include <iostream>

int main()
{
	double hoursWorked;
	double hourlyPay;
	double netPaid;

	std::cout << "Please enter your hourly pay >>> " << std::endl;
	std::cin >> hourlyPay;
	std::cout << "Please insert how many hours you worked >>>" << std::endl;
	std::cin >> hoursWorked;

	netPaid = (hoursWorked * hourlyPay) * 0.87;

	std::cout << "Your paycheck is going to be " << netPaid << "." << std::endl;

	system("Pause");
	return 0;
}