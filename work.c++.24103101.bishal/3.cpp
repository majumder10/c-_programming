#include <iostream>
using namespace std;

float convertTemperature(float temp, int choice) 
{
    return (choice == 1) ? (temp * 9/5) + 32 : (choice == 2) ? (temp - 32) * 5/9 : -1;
}

int main() {
    int choice;
    float temperature;

    cout << "Temperature Conversion Program" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter choice (1 or 2): ";
    cin >> choice;

    cout << "Enter the temperature: ";
    cin >> temperature;

    float result = convertTemperature(temperature, choice);
    if (result != -1) 
    {
        if (choice == 1) 
        {
            cout << temperature << " Celsius = " << result << " Fahrenheit" << endl;
        } 
        else 
        {
            cout << temperature << " Fahrenheit = " << result << " Celsius" << endl;
        }
    } 
    else 
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
