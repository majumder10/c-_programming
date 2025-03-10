#include <iostream>
using namespace std;


double calculateTax(double income) 
{
    double tax = 0;

    
    if (income <= 300000) 
    {
        tax = 0;
    }
    
    else if (income <= 400000) 
    {
        tax = (income - 300000) * 0.05;
    }
    
    else if (income <= 700000) 
    {
        tax = 5000 + (income - 400000) * 0.10;
    }
   
    else if (income <= 1100000) 
    {
        tax = 35000 + (income - 700000) * 0.15;
    }
    
    else if (income <= 1600000) 
    {
        tax = 85000 + (income - 1100000) * 0.20;
    }
    
    else 
    {
        tax = 185000 + (income - 1600000) * 0.25;
    }

    return tax;
}

int main() 
{
    double income;

    
    cout << "Enter your total annual income: ";
    cin >> income;

    
    double tax = calculateTax(income);

    
    cout << "Your total income tax is: "<< tax <<endl;

    return 0;
}
