#include <iostream>
#include<cmath>

using namespace std;


bool calcPow(double a, double b, double c)
{
	if (pow(b, a) == c)
		return true;
	else
		return false;
}


int main() {
	double a, b, c;
	cout << "Enter 3 double precision numbers : ";
	cin >> a >> b >> c;

	if (calcPow(a, b, c))
		cout << "Returned \"True\". " << a << " to the power of " << b << " is equal to " << c << endl;

	else
		cout << "Returned \"False\". " << a << " to the power of " << b << " is \"NOT\" equal to " << c << endl;


	return 0;
}
