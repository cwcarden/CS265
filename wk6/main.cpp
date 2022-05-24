// Charles W. Carden
// CS265 Programming in C++
// Week 6 Assignment

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

int doubleNum(int x);
int reverseNum(int x);
int raiseNum(int x);
int sumNum(int x);
int primeNum(int x);
int lessThanTen(int x);

void printFunction(int x, int y);


int main()
{
	int randomNum;
	int menuSelection;
	int isPrime;

	srand(time(NULL));
	randomNum = rand() % 100;
	
	std::cout << std::endl << "Your Random Number is: " << randomNum << std::endl;

	do
	{
		// Main Selection Menu
		std::cout << std::endl << "Select (1) to double the two digit number number.";
		std::cout << std::endl << "Select (2) to reverse the digits of the number.";
		std::cout << std::endl << "Select (3) to raise the number to the power of 2, 3 or 4.";
		std::cout << std::endl << "Select (4) to sum the digits of the number.";
		std::cout << std::endl << "Select (0) to abort." << std::endl << std::endl;
		std::cin >> menuSelection;
		
		switch (menuSelection)
		{
		case 1:
			randomNum = doubleNum(randomNum);
			isPrime = primeNum(randomNum);
			printFunction(randomNum, isPrime);
			randomNum = lessThanTen(randomNum);
			break;
		
		case 2:
			randomNum = reverseNum(randomNum);
			isPrime = primeNum(randomNum);
			printFunction(randomNum, isPrime);
			randomNum = lessThanTen(randomNum);
			break;
		
		case 3:
			randomNum = raiseNum(randomNum);
			isPrime = primeNum(randomNum);
			printFunction(randomNum, isPrime);
			randomNum = lessThanTen(randomNum);
			break;
		
		case 4:
			randomNum = sumNum(randomNum);
			isPrime = primeNum(randomNum);
			printFunction(randomNum, isPrime);
			randomNum = lessThanTen(randomNum);
			break;
		
		default:
			break;
			system("pause");
		}
	} 
	
	while (menuSelection != 0);
	std::cout << std::endl;
	system("pause");
	return 0;
}


//double number function
int doubleNum(int randomNum)
{
	randomNum = randomNum * 2;
	return randomNum;
}


// reverse function
int reverseNum(int randomNum)
{
	int ones = 0, tens = 0, thous = 0;
		
	if (randomNum < 10)
		{
			return randomNum;
		}
	if (randomNum < 100)
	{
		ones = randomNum % 10;
		randomNum = randomNum / 10;
		tens = randomNum % 10;
		randomNum = ones * 10 + tens * 1;
		return randomNum;
	}
	if (randomNum < 1000)
	{
		ones = randomNum % 10;
		randomNum = randomNum / 10;
		tens = randomNum % 10;
		randomNum = randomNum / 10;
		thous = randomNum % 10;
		randomNum = ones * 100 + tens * 10 + thous * 1;
		return randomNum;
	}
	return randomNum;
}


// Raise to power function
int raiseNum(int randomNum)
{
	//declare variables
	double raiseTo;
	std::cout << std::endl << "Enter power (2, 3, 4): ";
	std::cin >> raiseTo;
	randomNum = pow(randomNum, raiseTo);
	return randomNum;
}


// Sum function
int sumNum(int randomNum)
{
	int ones, tens, huns, thous;
	ones = randomNum % 10;
	randomNum = randomNum / 10;
	tens = randomNum % 10;
	randomNum = randomNum / 10;
	huns = randomNum % 10;
	randomNum = randomNum / 10;
	thous = randomNum % 10;
	randomNum = ones + tens + huns + thous;
	return randomNum;
}


// Prime or not function
int primeNum(int randomNum)
{
	int isPrime;
	int count = 0;
		for (int i = 2; i < randomNum; i++)
		{
			if (randomNum % i == 0)
			{
				count++;
				break;
			}
		}
	if (count == 0)
	{
		isPrime = 0;
		return isPrime;
	}
	else
	{
		isPrime = 1;
		return isPrime;
	}
}


// print function
void printFunction(int randomNum, int isPrime)
{
	if (isPrime == 0)
	{
		std::cout << std::endl;
		std::cout << randomNum << " is a prime number." << std::endl << std::endl;
	}
	else
	{
		std::cout << std::endl;
		std::cout << randomNum << " is not a prime number." << std::endl << std::endl;
	}
}


// less than 10 function
int lessThanTen(int randomNum)
{
	if (randomNum < 10)
	{
		std::cout << randomNum << " is < 10. Adding 10 to the number." << std::endl;
		randomNum = randomNum + 10;
		return randomNum;
	}
	return randomNum;
}