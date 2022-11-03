#include <iostream>

using namespace std;

int dane[10];
int rozmiar;

void push() 
{
    if( rozmiar >= 10 ) 
    {
        cout << ":(" << endl;
    }
        else 
        {
            cin >> dane[ rozmiar ];
            rozmiar = rozmiar + 1;
            cout << " :) " << endl;
        }
}

void pop() 
{
    if( rozmiar >= 1 ) 
    {
        rozmiar = rozmiar - 1;
        cout << dane[ rozmiar ] << endl;
    }
        else 
        {
            cout << ":(" << endl;
        }
}

int main() 
{
    rozmiar = 0;
    char ch;

        while( cin >> ch ) 
        {
            if( ch == '+' )
                push();
            else if( ch == '-' )
                pop();
        }
    return 0;
}
