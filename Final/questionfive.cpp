#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <array>
#include <algorithm>

using namespace std;


int main()
{
	int maxIndex;
	int cars[10];
	for (int i = 0; i < 10; i++)
	{
		cout << endl << "Enter the total cars sold by Sales Person #" << i + 1 << ":" << endl;
		cin >> cars[i];
	}

	// Sum the total number of cars
	int sum = 0;
	int n = sizeof(cars) / sizeof(int);
	for (int i = 0; i < n; i++)
	{
		sum += cars[i];
	}

	//Find the largest number and index in array

	maxIndex = max_element(cars, cars+ 10) - cars;
	cout << endl;

	cout << "The total number of cars sold was: " << sum << endl;
	cout << "Salesperson #" << maxIndex + 1 << " sold the most cars which was " << cars[maxIndex] << " total cars. " << endl;
	cout << endl;
}
