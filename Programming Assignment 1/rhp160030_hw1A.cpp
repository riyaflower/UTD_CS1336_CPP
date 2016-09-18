// Author: Richa Patel
// NetID: rhp160030
// Date: Sep 23, 2016
// Course: CS-1336
// Section: 009
// Name: Programming Assignment #1 (Total Purchase)

// Description: This program calculates a subtotal purchase,
//             adds sales tax, then calculates the total.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()

{
	//List the types of the variables
	float item1, item2, item3, item4, item5, subtotal, tax, total;

	// Define the variables - values were given
	item1 = 12.95;

	item2 = 24.95;

	item3 = 6.95;

	item4 = 14.95;

	item5 = 3.95;

	// The subtotal is the sum of all items
	subtotal = item1 + item2 + item3 + item4 + item5;

	//tax is 7% - so that is the same as 7/100 or 0.07
	tax = subtotal * (0.07);

	// total is the final cost, which is the subtotal plus the tax
	total = subtotal + tax;

	// Display all the given values in vertical alignment
	// I have used setprecision to display 2 decimal places
	// With the given values, I have used setw(7) to display decimals in vertical alignment

	cout << fixed << setprecision(2);
	cout << "Item 1   $" << setw(7) << item1 << "\n";
	cout << "Item 2   $" << setw(7) << item2 << "\n";
	cout << "Item 3   $" << setw(7) << item3 << "\n";
	cout << "Item 4   $" << setw(7) << item4 << "\n";
	cout << "Item 5   $" << setw(7) << item5 << "\n";
	cout << "Subtotal $" << setw(7) << subtotal << "\n";
	cout << "Tax      $" << setw(7) << tax << "\n";
	cout << "Total    $" << setw(7) << total << "\n";

	return 0;
}
