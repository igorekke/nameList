#include <iostream>
using namespace std;
int main()
{
	string imie;
	int liczba;
	cout << "Podaj imie:" << endl;
	cin >> imie;
	cout << "Podaj liczbe calkowita:" << endl;
	cin >> liczba;
	for(int i=1; i<=liczba; i++)
	{
		cout << i << ". " << imie << endl;
	}
}
