import closure;
#include <iostream>
#include <clocale>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n = 0;
	cout << "������� ��������� � ��������� ��������: ";
	cin >> n;
	closureIntMax(n, -n);
	cout << endl;
	closureIntMin(n, -n);
}
