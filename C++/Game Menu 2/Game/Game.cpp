

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

using namespace std;


int main() {

	user usr;
	string UserNameX,gender_;
	char choice;

	system("CLS");
	cout << "Main Menu: " << endl;
	cout << "a - Play Game" << endl;
	cout << "b - Create a User" << endl;
	cout << "c - View All Users" << endl;
	cout << "d - Credits" << endl;
	cout << "e - Exit Game" << endl;
	cin >> choice;
	if (choice == 'e' || choice == 'E')
		system("CLS");
	cout << "\aYou're going   :(   Bye!\n";


	while (choice != 'a'&& choice != 'A'&& choice != 'b'&& choice != 'B'&& choice != 'c'&& choice != 'C'&& choice != 'd'&& choice != 'D') {
		system("CLS");
		cout << "Not an Entry, Try again.\n";
		cout << "Main Menu: " << endl;
		cout << "a - Play Game" << endl;
		cout << "b - Create a User" << endl;
		cout << "c - View All Users" << endl;
		cout << "d - Credits" << endl;
		cout << "e - Exit Game" << endl;
		cin >> choice;
	}
	while (choice != 'e') {

		switch (choice) {
		case 'a':case 'A':
			system("CLS");
			cout << "Not Yet, Update Coming Soon, mij@!\n\n\n";
			cout << "Main Menu: " << endl;
			cout << "a - Play Game" << endl;
			cout << "b - Create a User" << endl;
			cout << "c - View All Users" << endl;
			cout << "d - Credits" << endl;
			cout << "e - Exit Game" << endl;
			cin >> choice;
			break;
		case 'b':case 'B':
			//system("CLS");
			//usr.setUserName(UserNameX);
			cout <<"hola" << endl;
			break;
		case 'c':case 'C':
			system("CLS");
			cout << "Not Yet, Update Coming Soon, mij@!\n\n\n";
			cout << "Main Menu: " << endl;
			cout << "a - Play Game" << endl;
			cout << "b - Create a User" << endl;
			cout << "c - View All Users" << endl;
			cout << "d - Credits" << endl;
			cout << "e - Exit Game" << endl;
			cin >> choice;
			break;
		case 'd':case 'D':
			system("CLS");
			cout << "Not Yet, Update Coming Soon, mij@!\n\n\n";
			cout << "Main Menu: " << endl;
			cout << "a - Play Game" << endl;
			cout << "b - Create a User" << endl;
			cout << "c - View All Users" << endl;
			cout << "d - Credits" << endl;
			cout << "e - Exit Game" << endl;
			cin >> choice;
			break;
		}
	}
	return 0;
}
