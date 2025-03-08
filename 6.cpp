#include<iostream>
using namespace std;
int main()
{

    int num1,num2;
    cout<<"Enter 2 numbers : ";
    cin>>num1>>num2;


    int sum= num1 + num2;
    int sub = num1 - num2 ;
    int mult =num1 * num2;
    double div =(float)num1 / num2 ;//type casting 


    cout <<sum<<endl<<sub<<endl<<mult<<endl<<div<<endl; 




    return 0;
}