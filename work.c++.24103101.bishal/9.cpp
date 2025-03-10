#include <iostream>
using namespace std;


int calculator(int a, int b, char op) 
{
    return (op == '+') ? a + b :
           (op == '-') ? a - b :
           (op == '*') ? a * b :
           (op == '/') ? (b != 0 ? a / b : 0) : 0; 
}

int main() 
{
    int num1, num2;
    char op;

    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    cout <<"Result: " <<calculator(num1, num2, op)<< endl;

    return 0;
}
