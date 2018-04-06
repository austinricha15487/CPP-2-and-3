// Lakeview Hotel
// Date: 4/5/2018
// Author: Austin Richards
#include <ctime>
#include <iostream>
#include <random>
int main()
{
	double pricePerNight = 129.59;
	int nightsStayed;
	int serviceCharge = 35;
	int phoneMinutesRan;
	srand( time(0));
	double pricePerMinutes = 0.25;
	int servicesUsed;
	double finalPrice;

	std::cout << "Thank you for staying with us here at Lakeview Hotel! Tell us how man nights you stayed and if you payed for room service." << std::endl;
	std::cin >> nightsStayed;
	std::cin >> servicesUsed;
	phoneMinutesRan = rand() % 50 + 1;
		std::cout << phoneMinutesRan << std::endl;
	std::cout << " Okay sir it appears you stayed for " << nightsStayed << " nights and did use " << servicesUsed << " services and also " << phoneMinutesRan << " minutes of phone." << std::endl;
	finalPrice = (phoneMinutesRan * pricePerMinutes) + (nightsStayed * pricePerNight) + (serviceCharge * servicesUsed); 
	std::cout << "Okay sir your final price is going to be " << finalPrice << "." << std::endl;

	system("pause");
	return 0;
}