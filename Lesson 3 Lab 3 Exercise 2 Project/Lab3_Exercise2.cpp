// Lab 3 Exercise 2
// Calculate MPH (Miles Per Hour) and KPH (Kilometers Per Hour).
//
// Program by: Richa Patel

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Define your variables

	float starting_mileage, ending_mileage, total_hours, total_miles, avg_mph, total_kilometers, avg_kmph;

// Introduce the program

	cout << "This is a program that will help you calculate how many miles you traveled on your trip and your average speeds in both miles/hour and kilometers/hour.\n" ;

	// Ask the user to enter the starting mileage of the trip

	cout << "What was your starting mileage for your trip?\n";
	cin >> starting_mileage;

// Ask the user to enter the ending mileage of the trip

	cout << "What was your ending mileage for your trip?\n";
	cin >> ending_mileage;

// Ask the user to enter in the total hours the trip took

	cout << "How long (in hours) was your entire trip?\n";
	cin >> total_hours;

// Calculate the total miles traveled

	total_miles = ending_mileage - starting_mileage;

// Display the total miles traveled

	cout << fixed << setprecision(1);
	cout << "So, after doing some calculations, here is what I have for you.\n\n";
	cout <<"You had traveled a total of " << total_miles << " miles.\n";

// Calculate the number of miles traveled per hour

	avg_mph = total_miles / total_hours;

// Display the number of miles traveled per hour

	cout << "You were traveling at an average of " << avg_mph << " miles per hour!\n";

// Convert the miles traveled into kilometers using the conversion factor 1 mile = 1.60934 kilometers

	total_kilometers = total_miles * 1.60934;

// Display the total number of kilometers traveled

	cout << "You had traveled a total of " << total_kilometers << " kilometers.\n";

// Calculate the number of kilometers traveled per hours

	avg_kmph = total_kilometers / total_hours;

// Display the number of kilometers traveled per hour

	cout << fixed << setprecision(1);
	cout << "You were traveling at an average of " << avg_kmph << " kilometers per hour!";

	return 0;
}
