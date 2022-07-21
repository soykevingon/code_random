#ifndef USER_H
#define USER_H
#include <string>
using namespace std;
class user {
public:
	user();
	~user();
	string getGender();
	string getUserName();
	string getPrefferedColor();
	void setGender(string genderX);
	void setUserName(string UserNameX);
	void setPrefferedColor(string prColorX);
private:
	string gX;
	string usrN[10][10];
	string PrefColor;
};
#endif // USER_H
