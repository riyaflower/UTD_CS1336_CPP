// Author: Richa Patel
// NetID: rhp160030	
// Date: Sep 23, 2016

// Course: CS-1336
// Section: 009
// Name: Programming Assignment #1 (Total Purchase)

// Description: A soft drink company recently surveyed 12,467 of its customers and found that approximately 14 percent of those surveyed purchase one or more energy drinks per week. Of those customers who purchase energy drinks, approximately 64 percent of them prefer citrus flavored energy drinks. Write a program that displays the following:
// The approximate number of customers in the survey who purchase one or more energy drinks per week
// The approximate number of customers in the survey who prefer citrus flavored energy drinks


#include <iostream>
#include <string>

using namespace std;

int main()

{
	
	// List the types of the variables
	int total_customers, one_per_week, citrus_flavored;

	// Define the variables' values
	total_customers = 12467;

	// Amount of customers who purchase one or more energy drinks
	one_per_week = total_customers * (0.14);

	// Amount of people who prefer citrus flavored drinks
	citrus_flavored = one_per_week * (0.64);

	// Display number of people who purchase one or more drinks a week
	cout << one_per_week << " customers purchase one or more energy drinks per week. \n";

	// Display number of people who prefer citrus flavored eneergy drinks
	cout << citrus_flavored << " customers prefer citrus flavored energy drinks.\n";
	
	return 0;

}
