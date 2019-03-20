// GradeSchool.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int age;
	string grade[12] = { "1st grade", "2nd Grade", "3rd grade", "4th grade", "5th grade", "6th grade", "7th grade", "8th grade", "9th grade", "10th grade", "11th grade", "12th grade",};
	cout << "Enter Age: " << endl;
	cin >> age;

	for (int i = 0; i <= 12; i++) {
		if (age < 5) {
			cout << "Too young for school " << endl;
			break;
		}

		else if (age == 5) {
			cout << "Go to Kindergarten " << endl;
			break;
		}
		else if (age > 5 || age <= 17) {
			cout << "Go to " + grade[age-6] << endl;
			break;

		}
		else {
			cout << "Go to college" << endl;
		}
	}

	
	
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
