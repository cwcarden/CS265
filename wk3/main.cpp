// Charles W. Carden
// CS265 Programming in C++
// Week 3 Assignment

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int accountNumber, minutesUsedRegular, minutesUsedPremiumDay, minutesUsedPremiumNight;
    double regularBillTotal, premiumBillTotal;
    char serviceCode;

    const float REGULAR_SERVICE_FEE = 10.00;
    const float REGULAR_SERVICE_RATE = 0.20;
    const float PREMIUM_SERVICE_FEE = 25.00;
    const float PREMIUM_PEAK_RATE = 0.10;
    const float PREMIUM_OFF_PEAK_RATE = 0.05;

    cout << "Enter your account number:      ";
    cin >> accountNumber;
    cout << "Enter your service code (r for regular, p for premium:    ";
    cin >> serviceCode;
    serviceCode = toupper(serviceCode);
    cout << serviceCode;

    switch (serviceCode) {
    case 'R':
        cout << "Please enter the number of Regular minutes used:  ";
        cin >> minutesUsedRegular;
        if (minutesUsedRegular > 50) {
            regularBillTotal = (REGULAR_SERVICE_FEE) + ((minutesUsedRegular - 50) * (REGULAR_SERVICE_RATE));
        }

    }

    return 0;

}