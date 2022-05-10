// Charles W. Carden
// CS265 Programming in C++
// Midterm problem 5

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	int firstNum, secondNum, count;
	int sumEvenNum = 0;
	int sumSquareOddNum = 0;
	char charCount;

	// Question A.
	cout << "-----------------------------QUESTION A------------------------------------------" << endl;
	cout << "Enter two integers. The first number should be smaller than the second number:  " << endl;
	cin >> firstNum >> secondNum;
	cout << "You entered: " << firstNum  << " and " << secondNum <<  "." << endl;
	cout << "---------------------------------------------------------------------------------" << endl;
	cout << endl;

	// Question B.
	cout << "-----------------------------QUESTION B------------------------------------------" << endl;
	if (firstNum % 2 == 0)
		count = firstNum + 1;
	else
		count = firstNum;
	
	cout << "The odd numbers between " << firstNum << " and " << secondNum << " are: " << endl;

	while (count <= secondNum)
	{
		cout << count << " ";
		count = count + 2;
	}
	cout << endl;
	cout << "---------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << endl;

	cout << "-----------------------------QUESTION C------------------------------------------" << endl;
	// Question C
	if (firstNum % 2 == 0)
		count = firstNum;
	else
		count = firstNum + 1;
	while (count <= secondNum)
	{
		sumEvenNum = sumEvenNum + count;
		count = count + 2;
	}
	cout << "The sum of the even integers between " << firstNum << " and " << secondNum << " is " << sumEvenNum << endl;

	cout << "-----------------------------QUESTION D------------------------------------------" << endl << endl;
	// Question D
	cout << "Number - Square" << endl;
	cout << "---------------" << endl;
	count = 1;
	while (count <= 10)
	{
		cout << setw(2) << count << setw(5) << "     = " << setw(3) << count
			* count << endl;
		count++;
	}
	cout << "---------------------------------------------------------------------------------" << endl << endl;
	cout << "-----------------------------QUESTION E------------------------------------------" << endl;
	// Question E
	if (firstNum % 2 == 0)
		count = firstNum + 1;
	else
		count = firstNum;
	while (count <= secondNum)
	{
		sumSquareOddNum = sumSquareOddNum + count * count;
		count = count + 2;
	}
	cout << "The sum of squares for all odd integers between " << firstNum << " and " << secondNum << " is " << sumSquareOddNum << "." << endl;
	cout << "---------------------------------------------------------------------------------" << endl << endl;

	cout << "-----------------------------QUESTION F------------------------------------------" << endl;
	// Question F
	charCount = 'A';
	while (charCount <= 'Z')
	{
		cout << "All upper case letters are as follows: ";
		charCount = 'A';
		while (charCount <= 'Z')
		{
			cout << charCount << " ";
			charCount++;
		}
		cout << endl;
	}
	cout << "---------------------------------------------------------------------------------" << endl;
	
	return 0;
}
