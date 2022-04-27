// Charles W. Carden
// CS265 Programming in C++

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;
	
	string fName, lName, department;
	double monthlyGrossSalary, bonusPercent, taxPercent, distTravel, travelTime, cupCost;
	double payCheck, averageSpeed, monthlySalary, salesAmount;
	int coffeeCupsSold;

	inFile.open("inData.txt");
	outFile.open("outData.txt");
	
	// set to decimal, trailing decimals, 2 point floats
	outFile << fixed << showpoint << setprecision(2);
	
	//First lines

	inFile >> fName >> lName >> department;
	outFile << "Name: " << fName + ' ' + lName << ", Department: " << department << std::endl;
	cout << "Testing: " << fName << " " << lName << " " << department << endl;
	
	//Second Lines
	inFile >> monthlyGrossSalary >> bonusPercent >> taxPercent;
	outFile << "Monthly Gross Salary: $" << monthlyGrossSalary << ", Monthly Bonus: "
		<< bonusPercent << "%," << "Taxes: " << taxPercent << "%" << endl;

	cout << "Testing Line 2: " << "Monthly Gross Salary: $" << monthlyGrossSalary << ", Monthly Bonus: "
		<< bonusPercent << "%," << "Taxes: " << taxPercent << "%" << endl;

	//Third Lines
	monthlySalary = (monthlyGrossSalary * (bonusPercent / 100)) + (monthlyGrossSalary);
	payCheck = (monthlySalary) - (monthlySalary * (taxPercent / 100));
	outFile << "Paycheck: $" << payCheck << endl;
	cout << "Testing Line 3: " << "Paycheck: $" << payCheck << endl;

	//Fourth Lines
	inFile >> distTravel >> travelTime;
	outFile << "Distance Traveled: " << distTravel << " miles," << "Traveling Time: " << travelTime << " hours" << endl;
	cout << "Testing Line 4: " << "Distance Traveled: " << distTravel << " miles," << "Traveling Time: " << travelTime << " hours" << endl;

	//Fifth Lines
	averageSpeed = distTravel / travelTime;
	outFile << "Average Speed: " << averageSpeed << " miles per hour" << endl;
	cout << "Testing Line 5: " << "Average Speed: " << averageSpeed << " miles per hour" << endl;

	//Sixth Lines
	inFile >> coffeeCupsSold >> cupCost;
	outFile << "Number of Coffee Cups Sold: " << coffeeCupsSold << ", Cost: $" << cupCost << " per cup" << endl;
	cout << "Testing Line 6: " << "Number of Coffee Cups Sold: " << coffeeCupsSold << ", Cost: $" << cupCost << " per cup" << endl;

	//Seventh Lines
	salesAmount = (coffeeCupsSold * cupCost);
	outFile << "Sales Amount = $" << salesAmount << endl;
	cout << "Testing Line 7: " << "Sales Amount = $" << salesAmount << endl;




	inFile.close();
	outFile.close();


	return 0;
}
