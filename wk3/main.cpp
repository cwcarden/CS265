// Charles W. Carden
// CS265 Programming in C++
// Week 3 Assignment

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int accountNumber, minutesUsedRegular, minutesUsedPremiumDay, minutesUsedPremiumNight;
    double regularBillTotal, premiumBillTotal, dayPremiumBill, nightPremiumBill;
    char serviceCode;

    const float REGULAR_SERVICE_FEE = 10.00;
    const float REGULAR_SERVICE_RATE = 0.20;
    const float PREMIUM_SERVICE_FEE = 25.00;
    const float PREMIUM_PEAK_RATE = 0.10;
    const float PREMIUM_OFF_PEAK_RATE = 0.05;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter your account number:      ";
    cin >> accountNumber;
    cout << "Enter your service code (r for regular, p for premium:    ";
    cin >> serviceCode;
    serviceCode = toupper(serviceCode);
    cout << endl;

    switch (serviceCode) {
    case 'R':
        cout << "Please enter the number of Regular minutes used:  ";
        cin >> minutesUsedRegular;
        cout << endl;

        if (minutesUsedRegular > 50) {
            regularBillTotal = (REGULAR_SERVICE_FEE) + ((minutesUsedRegular - 50) * (REGULAR_SERVICE_RATE));
        }
        else {
            regularBillTotal = REGULAR_SERVICE_FEE;
        }
        
        cout << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Service Type: Regular Service" << endl;
        cout << "Minutes Used: " << minutesUsedRegular << endl;
        cout << "User Amount Due: $" << regularBillTotal << endl;
        break;

    case 'P':
        cout << "Please enter the number of day (peak) minutes used: ";
        cin >> minutesUsedPremiumDay;
        cout << "Please enter the number of night (off peak) minutes used: ";
        cin >> minutesUsedPremiumNight;
        
        if (minutesUsedPremiumDay > 75) {
            dayPremiumBill = (minutesUsedPremiumDay - 75) * (PREMIUM_PEAK_RATE);
        }
        else {
            dayPremiumBill = 0;
        }

        if (minutesUsedPremiumNight > 100) {
            nightPremiumBill = (minutesUsedPremiumNight - 100) * PREMIUM_OFF_PEAK_RATE;
        }
        else {
            nightPremiumBill = 0;
        }

        premiumBillTotal = dayPremiumBill + nightPremiumBill + PREMIUM_SERVICE_FEE;
        
        cout << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Service Type: Premium Service" << endl;
        cout << "Night Minutes Used: " << minutesUsedPremiumNight << " - Day Minutes Used: " << minutesUsedPremiumDay << " - Total Premium minutes used : " << minutesUsedPremiumDay + minutesUsedPremiumNight << endl;
        cout << "User Amount Due: $" << premiumBillTotal << endl;
        break;

    default:
        cout << "Invalid Service Code Entered. Try again. " << endl;
        return 1;
        break;
    }

    return 0;

}