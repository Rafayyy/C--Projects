#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int select;                                   // For Menu selection
    long int bill = 0, Totabill = 0, seatnum = 0; // Forbills and Finalbill
    char Lop, Kop, Qop, Pop;                      // For Lahore, Karachi, Quetta, Peshawar options respectively

    // Menu display
    cout << "Welcome to Rawalpindi Railway Station! \n"
         << endl
         << "Where would you like to go? \n"
         << endl
         << "1-Lahore\n2-Karachi \n3-Quetta \n4-Peshawar\n"
         << endl;

    cin >> select;

    switch (select)
    {
    case 1:
    {
        cout << "Rawalpindi to Lahore\n\n"
             << "a- Executive Class: PKR 1000\n"
             << "b- Lower A/C: PKR 900 \n"
             << "c- Economy: PKR 600\n"
             << " Please select your ticket\n";

        cin >> Lop;

        switch (Lop)
        {

        case 'a':

            bill = 1000;
            break;

        case 'b':

            bill = 900;
            break;

        case 'c':

            bill = 600;
            break;

        default:

            cout << "Error! Please select the correct option!";

            break;
        }
        break;
    }
    case 2:

    {
        cout << "Rawalpindi to Karachi \n\n"
             << "a- Executive Class: PKR 5250\n"
             << "b- Lower A/C: PKR 4450\n"
             << "c- Economy: PKR 1900\n"
             << "d- First Class Sleeper: PKR 8300\n"
             << "e- Economy Sleeper: PKR 2000\n"
             << "  Please select your ticket: \n";

        cin >> Kop;

        if (Kop == 'a')

        {
            bill = 5250;
        }

        else if (Kop == 'b')

        {
            bill = 4450;
        }

        else if (Kop == 'c')

        {
            bill = 1900;
        }

        else if (Kop == 'd')

        {
            bill = 8300;
        }

        else if (Kop == 'e')

        {
            bill = 2000;
        }

        break;
    }

    case 3:
    {
        cout << "Rawlpindi to Quetta \n\n"
             << "a- First Class Sleeper: PKR 7050\n"
             << "b- Economy Sleeper: PKR 1950\n";

        cin >> Qop;

        if (Qop == 'a')

        {
            bill = 7050;
        }

        else if (Qop == 'b')

        {
            bill = 1950;
        }

        break;
    }
    case 4:
    {
        cout << "Rawalpindi to Peshawar \n\n"
             << "a- Executive Class: PKR 700\n"
             << "b- Lower A/C: PKR 650\n"
             << "c- Economy: PKR 400\n";

        cin >> Pop;

        if (Pop == 'a')

        {
            bill = 700;
        }

        else if (Pop == 'b')

        {
            bill = 650;
        }

        else if (Pop == 'c')
        {
            bill = 400;
        }

        break;

    default:

        cout << "Error: Please enter the correct option.." << endl;
        break;
    }
    }

    // for billing with tax
    cout << "Enter number of seats: ";
    cin >> seatnum;
    Totabill = (seatnum * bill) + (seatnum * bill * 0.15);

    cout << "Total bill: RS " << Totabill;
}