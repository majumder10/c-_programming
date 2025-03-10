#include<iostream>
using namespace std;

int main()
{
    int  grade ;

    cout<<"please enter the grade : ";
    cin>>grade;

    if(grade >= 80 && grade <=100 )
    {
        cout<<"Enter Grade A : " ;
    }
    else if(grade >=70 )
    {
        cout<<"Enter Grade B : ";
    }
    else if(grade >=60 )
    {
        cout<<"Enter Grade c : ";
    }
     else if(grade >=50 )
    {
        cout<<"Enter Grade D : ";
    }
    else
    {
        cout<<"Enter Grade F : ";
    }
    

return 0;
}
