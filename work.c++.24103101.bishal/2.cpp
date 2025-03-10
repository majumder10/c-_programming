#include <iostream>
using namespace std;


int checkEvenOdd(int number) 
{
    
    if (number % 2 == 0) 
    {
        cout << number << " is even."<< endl;
    } 
    else
    {
        cout << number << " is odd."<< endl;
    }
}

int main() 
{
    
    int numbers[] = {12, 7, 22, 35, 8, 19, 50, 67, 44, 9},i,size;
    
    size = sizeof(numbers) / sizeof(numbers[0]);

    for (i = 0; i < size; i++) 
    {
        checkEvenOdd(numbers[i]);  
        
    }

    return 0;
}
