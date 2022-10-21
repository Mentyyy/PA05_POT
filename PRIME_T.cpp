#include<iostream>
#include<math.h>
using namespace std;

bool pierwsza(int n)
{
	if (n < 2) return false; 

	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return false; 
	return true; 
}

int main()
{
	int C;
	cin >> C;

	for (int i = 0; i < C; i++)
	{
		int n;
		cin >> n;

		if (pierwsza(n))
			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;
	}
	return 0;
}
