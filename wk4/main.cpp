// Charles W. Carden
// CS265 Programming in C++
// Week 4 Assignment

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <Windows.h>

using namespace std;

int main()
{
    int exitCode = 0;
    bool stopCount;
    int count = 1;
    char word, letter;
    int phoneNumber;

    while (exitCode != 1) {
        stopCount = false;
        count = 1;
        cout << "Enter a telephone number using letters: ";

        while (stopCount == 0) {
            cin >> word;
            word = toupper(word);

            switch (word) {
            case 'A':
            case 'B':
            case 'C':
                phoneNumber = 2;
                break;

            case 'D':
            case 'E':
            case 'F':
                phoneNumber = 3;
                break;
            
            case 'G':
            case 'H':
            case 'I':
                phoneNumber = 4;
                break;

            case 'J':
            case 'K':
            case 'L':
                phoneNumber = 5;
                break;
            
            case 'M':
            case 'N':
            case 'O':
                phoneNumber = 6;
                break;

            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                phoneNumber = 7;
                break;

            case 'T':
            case 'U':
            case 'V':
                phoneNumber = 8;
                break;

            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                phoneNumber = 9;
                break;
            }

            if (count == 4)
                cout << "-" << phoneNumber;
            else
                cout << phoneNumber;

            if (count >= 7)
            {
                cout << endl;
                while (cin.get() != '\n');
                stopCount = true;
            }

            count++;
        }

        cout << "Would you like to do another one? Y or N?     " << endl;
        cin >> letter;
        letter = toupper(letter);

        if (letter == 'N') {


            cout << "############################" << endl;
            cout << "#   Thank you for using    #" << endl;
            cout << "#      telephone code      #" << endl;
            cout << "#         generator!       #" << endl;
            cout << "############################" << endl;
            cout << endl;
            Sleep(1000);
            cout << "          Good Bye!         " << endl;
            Sleep(1000);
            exitCode = 1;
        }
        else
            exitCode = 0;
    }

    return 0;

}