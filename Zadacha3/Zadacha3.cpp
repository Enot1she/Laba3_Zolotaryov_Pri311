#include <iostream>
#include <iomanip>

using namespace std;

void main()
{
	int i;
	double xD = 0.1;
	float xF = 0.1f;

	cout << setprecision(18);
	cout << "xDouble = " << xD << endl;
	cout << "xFloat = " << xF << endl;

	for (i = 1; i <= 10; i++)
	{
		xD = xD + xD;
		xF = xF + xF;
	}
	cout << "xDouble2 = " << xD << endl;
	cout << "xFloat2 = " << xF << endl;
}
