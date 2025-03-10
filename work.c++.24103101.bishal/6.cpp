#include<iostream>
using namespace std;

int cheakprime(int n)
{
    int a = 0;
    for (int i =2;i<=n;i++)
    {
        if(n%i==0)
        {
            a++;
            break;
        }
    }
    return a;
}
int main()
{
    // int n;
    // cout<<"enter the number : ";
    // cin>>n;
    for(int i =2;i<=100;i++)
    {
        if (cheakprime(i))
        {
            cout<<i<<" "; 
        }
    }
    return 0;
}