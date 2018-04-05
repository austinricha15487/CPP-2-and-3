// Super Temp Simulator
// Date: 4/5/18
// Author: Austin Richards

#include <iostream>

int main()
{
	int numEggs;
	int dozen;
	int remainder;
	double pricePerDozen = 2.00;
	double pricePerOne = 0.25;
	double finalPrice;

	std::cout << "Please enter how many chicken babies you would like" << std::endl;
	std::cin >> numEggs;
	dozen = numEggs / 12;
	remainder = numEggs % 12;
	if (dozen >= 10)
	{
		pricePerDozen = 1.50;
	}
	finalPrice = (dozen * pricePerDozen) + (remainder * 0.25);
	std::cout << "Okay sir today you have a total of " << numEggs << " eggs. Thats " << dozen << " dozen and a remainder of " << remainder << " eggs." << std::endl;
	std::cout << "Your total is going to be " << finalPrice << std::endl;

	system("Pause");
	return 0;
}