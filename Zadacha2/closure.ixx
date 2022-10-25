#include <iostream>

using namespace std;

export module closure;

export void closureIntMax(int n, int border)
{
	cout << numeric_limits<int>::max() << " + " << n << " = " << numeric_limits<int>::max() + n << endl;
	if (n == border)
	{
		return;
	}
	else
	{
		closureIntMax(--n, border);
	}
}

export void closureIntMin(int n, int border)
{
	cout << numeric_limits<int>::min() << " + " << n << " = " << numeric_limits<int>::min() + n << endl;
	if (n == border)
	{
		return;
	}
	else
	{
		closureIntMin(--n, border);
	}
}
;