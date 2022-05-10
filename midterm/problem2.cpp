// Charles W. Carden
// CS265 Programming in C++
// Midterm problem 2

#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
    cout << fixed << showpoint << setprecision(2);

    int nickelCount, dimeCount, quarterCount;
    double totalMoney, nickelsCents, dimesCents, quartersCents;

    cout << "Enter the amount of nickels: " << endl;
    cin >> nickelCount;
    nickelsCents = nickelCount * 5;
    
    cout << "Enter the amount of dimes: " << endl;
    cin >> dimeCount;
    dimesCents = dimeCount * 10;

    cout << "Enter the amount of quarters: " << endl;
    cin >> quarterCount;
    quartersCents = quarterCount * 25;
    
    totalMoney = (nickelsCents + dimesCents + quartersCents) / 100;
    cout << totalMoney;
    return 0;

}
