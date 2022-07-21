
using namespace std;
#include <iostream>
#include <string>

class student {
private:
	string studentGrade;
	   	if (studentGrade = 100); {
		cout << "A\n";

	}
	string studentName;
public:
	void setStudentName(string name){
        studentName = name;}
	void setStudentGrade(string grade){

        studentGrade = grade;

	}
	string getStudentGrade(){



    return studentGrade;
	}
	string getStudentName(){
	return studentName;
	}

};

int main()
{
    student cls;
    cls.setStudentName("h");
    cout << cls.getStudentName();
    return 0;
}
