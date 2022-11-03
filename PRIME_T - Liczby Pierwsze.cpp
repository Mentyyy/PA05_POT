/*
Najważniejsze w zadaniu to zdać sobie sprawę, że wystarczy sprawdzić pierwiastek z `n`.
Nie ma bowiem liczby, która nie ma dzielnika w przedziale 1-10, a ma go gdzieś wyżej.

i * i <= n 
to to samo co: 
i <= sqrt( n )

Potęgujemy `i` lub pierwiastkujemy `n` ( SPOJ jednak woli drugi zapis )

PS: Jeżeli sqrt(n) jest liczbą rzeczywistą język C i C++ automaczynie wykona rzutowanie na typ int ucinając wszystko po przecinku.
*/

#include<iostream>

using namespace std;

bool pierwsza( int n )
{
	if( n < 2 ) return false; 

	for( int i = 2; i * i <= n; i++ )
		if( n % i == 0 ) return false; 
	return true; 
}

int main()
{
	int C;
	cin >> C;

	for( int i = 0; i < C; i++ )
	{
		int n;
		cin >> n;

		if( pierwsza( n ) )
			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;
	}
	return 0;
}
