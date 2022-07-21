#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float v0, v0x, v0y, angle, g;
	float thmax, tmax, t, xpos, ypos, vxt, vyt;
	int maxIterations;
	cout << "Insert initial speed and the angle\n";
	cin >> v0;
	cin >> angle;
	cout << "Initial speed " << v0 << ". Angle " << angle << ".\n";
	v0x = v0 * cos(angle*M_PI / 180);
	v0y = v0 * sin(angle*M_PI / 180);
	cout << fixed << setprecision(2);
	cout << "v0x= " << v0x << endl;
	cout << "v0y= " << v0y << endl;
	return 0;
}

