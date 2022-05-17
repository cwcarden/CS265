// Charles W. Carden
// CS265 Programming in C++
// Week 5 Assignment


#include <iostream>

using namespace std;

void output();
void time(int& userSelection);
void input(int& hours, int& minutes, char& type, int& choice, int& hours1);
void output(int& hours, int minutes, char type, int& choice, int& hours1);
void output(int& choice, int& hours1);


int main()
{
	int hours, hours1;
	int minutes;
	char type;
	char answer;
	int userSelection;
	do {
		time(userSelection);
		input(hours, minutes, type, userSelection, hours1);
		output(hours, minutes, type, userSelection, hours1);
		output(userSelection, hours1);
		cout << "Perform another time format conversion? (y/n): ";
		cin >> answer;
	} while ((answer == 'Y') || (answer == 'y'));

	return 0;
}


void time(int& userSelection)
{
	cout << "Enter (12) or (24) for 12 hour and 24 hour time conversion respectively: " << endl;
	cin >> userSelection;
}

void input(int& hours, int& minutes, char& type, int& userSelection, int& hours1)
{
	cout << "---- Convert from " << userSelection << " Hour Time Format ---- : " << endl;

	if (userSelection == 24)
	{
		cout << "Enter 24 hour time:(Example: 1930) :";
		cin >> hours1;
	}
	else
	{
		cout << "Enter the hour first (example: 07) : ";
		cin >> hours;
		cout << "Enter the two digit minutes (example: 45: ";
		cin >> minutes;
		cout << "(A) for a.m. or (P) for p.m. : " << endl;
		cin >> type;
	}

}

void output(int& hours, int minutes, char type, int& userSelection, int& hours1)
{
	if (userSelection == 12)
	{
		int t = 0;
		if (type == 'p' || type == 'P')
		{
			t = hours + 12;
		}
		else
		{
			t = hours;
		} cout << "The time in the 24 hour format is : " << t << ":";
		cout.width(2);
		cout.fill('0');
		cout << minutes << endl;
	}
}


void output(int& userSelection, int& hours1)
{
	int res = 0, res1 = 0, time = 0, res2 = 0;
	if (userSelection == 24)
	{
		if (hours1 >= 1200 && hours1 <= 2400)
		{
			res = hours1 / 100;
			time = res - 12;
			res1 = hours1 % 100;

			if (res1 == 0)
			{
				cout << "The time converted to 12 hour format is: " <<
					time << ":" << res1 << "0" << " P.M." << endl;
			}
			else
			{
				cout << "The time converted to 12 hour format is: " <<
					time << ":" << res1 << " P.M." << endl;
			}
		} if (hours1 > 0 && hours1 < 1200)
		{
			time = hours1;
			res = time / 100;
			res1 = time % 100;
			if (res1 == 0)
			{
				cout << "The time changed to a 12 hour format is: " <<
					res << ":" << res1 << "0" << " A.M." << endl;
			}
			else
			{
				cout << "The time changed to a 12 hour format is: " <<
					res << ":" << res1 << " A.M." << endl;
			}
		}
	}
}