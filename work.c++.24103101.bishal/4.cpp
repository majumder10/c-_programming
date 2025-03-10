#include <iostream>

using namespace std;

int factorial(int n) 
{
    int  fact =1 , i;

    for ( i =1 ; i <=n; i++) 
    {
        fact *= i;
    }
    return fact;
}

int main() 
{
    int j;
    for (j =1 ; j <=10 ; j++) 
    {
        cout << "Factorial of " << j << " is " << factorial(j) << endl;
    }

    return 0;
}
