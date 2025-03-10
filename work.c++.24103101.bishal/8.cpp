#include <iostream>
using namespace std;


int countChar(string str,char ch) 
{
    int count= 0 , i;

    for (i = 0; i < str.length(); i++)
        if (str[i] == ch) count++;
    return count;
}

int main() {
    string str;
    char ch;

    cout << "Enter a string (single word): ";
    cin >> str;  

    cout << "Enter a character: ";
    cin >> ch;

    cout << "The character" <<ch <<"appears" <<countChar(str, ch) <<"times"<<endl;

    return 0;
}
