// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string firstName = "";
	string lastName = "";
	string phoneNumber = "";

		cout << "Enter First name, Last Name, and Phone Number" << endl;
		cin >> firstName >> lastName;
		cin >> phoneNumber;

		cout << "Name: " << firstName << " " << lastName << endl;
		cout << "Phone Number: " << phoneNumber << endl;
    return 0;
}

