// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
void displayGoodBye();
int main()
{

	int choice, totalGrades, aGrades;
	double grade;
	char rptOrN;

	do {
		cout << endl
			<< " 1 - Add a new students grade.\n"
			<< " 2 - View all student grades.\n"
			<< " 3 - Calculate Average.\n"
			<< " 4 - Exit.\n"
			<< " Enter your choice and press return: ";
		cin >> choice;
		if (choice <= 0 || choice >= 5) {
			cout << "invalid number try again\n";
			cin >> choice;
		}
		switch (choice) {
		case 1:
			system("CLS");



			aGrades = 0;
			cout << "Enter how many grades you wil add.\n";
			cin >> totalGrades;

			for (int i = 0; i < totalGrades; i++)
			{
				cout << "Enter grades\n";
				cin >> grade;
				while (grade < 0 || grade > 100) {
					cout << "Invalid grade\n";
					cout << "Enter again\n";
					cin >> grade;
				}
				aGrades += grade;
			}


			break;
		case 2:
			system("CLS");
			cout << "All grades\n";
			for (int i = 0; i < totalGrades; i++)
			{
				cout << grade << endl;
			}
			break;
		case 3:
			system("CLS");
			cout << "Grade average " << aGrades / totalGrades << "\n";
			break;
		case 4:
			system("CLS");
			displayGoodBye();
			break;
			return 0;



		}cout << "Type Y to try again or N to end program.\n";
		cin >> rptOrN;
		if (toupper(rptOrN) == 'N')
		{
			displayGoodBye();
			return 0;
		}
	} while (toupper(rptOrN) == 'Y');
	return 0;
}

void displayGoodBye()
{
	cout << "*****************\n";
	cout << "*****************\n";
	cout << "*****GoodBye*****\n";
	cout << "***And Thanks!***\n";
	cout << "*****************\n";
	cout << "*****************\n";

}
