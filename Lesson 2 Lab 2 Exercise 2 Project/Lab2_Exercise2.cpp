// CS 1136 Lab 2 Exercise 2
//Program by: Richa Patel

#include <iostream>
using namespace std;

int main()
{
	// First define the variables
	double markup_amount, manufacture_price, markup_percentage, selling_price;

	// Get the manufacture price
	cout << "What is the manufacture price of the circuit board?";
	cin >> manufacture_price;

	//Establish the markup_percentage
	markup_percentage = 0.425;

	//Calculate the markup amount
	markup_amount = manufacture_price * markup_percentage;

	//Calculate the selling price
	selling_price = manufacture_price + markup_amount;

	//Display the markup amount and the selling price
	cout << "The markup for the circuit board is: $" << markup_amount << endl;
	cout << "The selling price for the circuit board is: $" << selling_price << endl;

	//End the program
	return 0;
}
