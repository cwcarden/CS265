// Charles W. Carden
// CS265 Programming in C++
// Midterm problem 4

#include <iostream>

using namespace std;

int main()
{
	int number, evenNumber(0), oddNumber(0);

	do
	{
		cout << "Please enter a number or 00 to sum the odd and even numbers: ";
		cin >> number;
		cout << endl;

		if (number % 2 > 0 || number == 1)
			oddNumber = oddNumber + number;
		else
			evenNumber = evenNumber + number;
	} while (number != 0);

	cout << "The odd numbers sum is: " << oddNumber << endl;
	cout << "The even numbers sum is: " << evenNumber << endl;

	return 0;
}