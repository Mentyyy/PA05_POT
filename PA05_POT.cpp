/*
When the numbers are high enough we cannot calculate the power under 1 second.
We don't even have to calculate that to know last digit. Example:
2^2 = 4
2^3 = 8
2^4 = 16
2^5 = 32
2^6 = 64
2^7 = 128
2^8 = 256
2^9 = 512
Here, in the results we've got a pattern on last digits wich goes:  4, 8, 6, 2  |  4, 8, 6, 2  | ..
And no matter if base is 2, 12, 22, or 678532 if the last digit from the base is 2 the pattern will appear.
All we have to do is to distinguish that from 0-9 numbers.
Base % 10 will get the last digit and the exponent % 4 will show us the number of the slot in our 2D array.
*/

#include <iostream>
using namespace std;

unsigned long int p, w;
int D;
int arr[10][4] = {
    {0, 0, 0, 0},
    {1, 1, 1, 1},
    {6, 2, 4, 8},
    {1, 3, 9, 7},
    {6, 4, 6, 4},
    {5, 5, 5, 5},
    {6, 6, 6, 6},
    {1, 7, 9, 3},
    {6, 8, 4, 2},
    {1, 9, 1, 9}
};

int main() 
{
cin >> D;
    for( int i = 0; i < D; i ++ )
    {
        cin >> p >> w;
        cout << arr[p %10][w %4] << endl;
    }
return 0;
}
