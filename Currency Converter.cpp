#include <iostream>
#include <Windows.h>
using namespace std;


int main()
{
    //changes font color of console
  //  HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
  //  SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);

    string currName;
    string currencyArray = {"European Euro, Yen, Dinar" };
    int currAmount;

    cout << "Hello to Currency Converter!" << endl << endl;
    cout << "Convert American Dollar to "<< currencyArray << endl <<endl;
    cout << "Please enter the name of currency you want to convert?" << endl;
    cin >> currName;
    cout << "Please enter the amount in " <<currName << " you want to convert?" << endl;
    cin >> currAmount;
    cout << endl;

    //changes euro to dollars
    double euroCalculation = currAmount / 0.84; 
    //changes yen to dollars
    double yenCalculation = currAmount / 106.59;
    //changes UAE dinar to dollars
    double dinarCalculation = currAmount / 3.67;

    if (currName == "European Euro") {
       cout << currAmount << " " << currName << " in US Dollars is $" << euroCalculation <<endl;
    }
    else if (currName == "Yen") {
        cout << currAmount << " " << currName << " in US Dollars is $" << yenCalculation << endl;
   }
    else if (currName == "Dinar") {
        cout << currAmount << " " << currName << " in US Dollars is $" << dinarCalculation << endl;
    }
    else {
        cout << "Please enter an appropriate currency name" << endl;
    }
    return 0;
}