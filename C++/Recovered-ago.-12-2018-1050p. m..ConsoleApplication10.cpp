// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int choice;
	do {
		cout << endl
			<< " 1 - Add a new students grade.\n"
			<< " 2 - View all student grades.\n"
			<< " 3 - Calculate Average.\n"
			<< " 4 - Exit.\n"
			<< " Enter your choice and press return: ";
		cin >> choice;

		switch (choice) {
		case 1:
			system("CLS");
			int grade;
			cout << "Enter a grade\n";
			cin >> grade;
			for (grade > 0 || grade < 100) {
				cout << "invalid grade\n";
				cout << "enter again\n";
				cin >> grade;
			}
			break;
		case 2:
			system("CLS");
			cout << "All grades\n";
			cout << grade << endl;
			break;
		case 3:
			system("CLS");
			cout << "Grade average\n";
			break;
		case 4:
			system("CLS");
			cout << "End of Program, Bye\n";
			break;
		}
	} while (choice == 4);
return 0;
}
