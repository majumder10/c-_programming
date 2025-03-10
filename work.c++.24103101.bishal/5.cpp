#include <iostream>

using namespace std;


int isLeapYear(int year) {
    
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        return 1; 
    }
    return 0; 
}

int main() 
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    
    if (isLeapYear(year) == 1)
    {
        cout << year << " leap year." << endl;
    } 
    else 
    {
        cout << year << " not  leap year." << endl;
    }

    return 0;
}
