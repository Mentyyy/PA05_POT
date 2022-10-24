#include <iostream>
#include <string>
using namespace std;

int main() 
{
   int t; 
   cin >> t; 
   for (int i = 0; i < t; i++)
   {
        string n, n2;
        cin >> n;
        int ile = 0;
        do
        {
            n2 = n; 
            for (int j = 0; j < n.length(); j++) // odwracanie elementu
            {
                n2[j] = n[n.length()-1-j]; 
            }
            
            if (n == n2) // jezeli taki sam to jest palindromem
            {
                cout << n << " " << ile << endl;
                break;
            }
       
            else // zamiana na 'int', dodawanie, zamiana sumy na 'string'
            {
                int x = atoi(n.c_str());
                int rx = atoi(n2.c_str());
                x += rx;
                ile++;
                n = to_string(x);
            } 
            
        } while (true);
   }
   return (0); 
}
