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
