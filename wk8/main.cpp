// Charles W. Carden
// CS265 Programming in C++
// Week 8 Assignment

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct fruitType
{
	string fruitName;
	string color;
	int fat;
	int sugar;
	int carbohydrate;
};


int main()
{
	fruitType fruit;
	cout << "Enter the fruit name: ";
	cin >> fruit.fruitName;
	
	cout << "Please enter a color: ";
	cin >> fruit.color;

	cout << "Please enter a fat content: ";
	cin >> fruit.fat;

	cout << "Sugar content? ";
	cin >> fruit.sugar;

	cout << "Now the carbohydrate: ";
	cin >> fruit.carbohydrate;
	cout << endl << endl;
	
	// Print out Fruit Details
	cout << "________Fruit Type Information_________" << endl;
	cout << "Fruit Name: " << fruit.fruitName << endl;
	cout << "Fruit Color: " << fruit.color << endl;
	cout << "Fruit Fat Content: " << fruit.fat << endl;
	cout << "Fruit Sugar Content: " << fruit.sugar << endl;
	cout << "Fruit Carbohydrate Content: " << fruit.carbohydrate << endl;
	cout << "_______________________________________" << endl;
}


