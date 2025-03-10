#include <iostream>
#include <cmath> 
using namespace std;


double power(double base, int exponent) 
{
    double result = 1;

    
    int absExponent = abs(exponent); 
    
    for (int i = 1; i <= absExponent; ++i) 
    {
        result *= base;
    }
    
    if (exponent < 0) 
    {
        result = 1 / result;
    }

    return result;
}

int main() 
{
    double base;
    int exponent;

    
    cout << "Enter the base number: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    
    double result = power(base, exponent);
    cout << base << " raised to the power " << exponent << " is: " << result << endl;

    return 0;
}
