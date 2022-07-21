#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include "user.h"
using namespace std;

user::user() {
	gX = "";
}
user::~user() {
}

void user::setGender(string genderX)
{	
	cout << "Create Gender\n";
	getline(cin, gX);
	gX = genderX;
}

void user::setUserName(string UserNameX)
{	cout << "Create UserName\n";
	getline(cin, usrN[10][10]);
	usrN[10][10] = UserNameX;
	cout << usrN << endl;
}

void user::setPrefferedColor(string prColorX)
{	

}

string user::getGender()
{

	return gX;
}

string user::getUserName()
{
	return usrN[10][10];
}

string user::getPrefferedColor()
{
	return string();
}

