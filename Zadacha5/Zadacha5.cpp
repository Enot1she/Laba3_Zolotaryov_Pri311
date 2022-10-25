#include <iostream>

using namespace std;

int main()
{
	cout << "------------------------------------------ ";
	cout << "CHAR TAB";
	cout << " ------------------------------------------" << endl;

	int stepC = -128;
	int stepUC = 0;
	for (stepC = -128; stepC <= 127; stepC++)
	{
		cout << stepC << "\t - \t" << static_cast<char>(stepC) << endl;;
	}

	cout << "------------------------------------------ ";
	cout << "UNSIGNED CHAR TAB";
	cout << " ------------------------------------------" << endl;

	for (stepUC = 0; stepUC <= 255; stepUC++)
	{
		cout << stepUC << "\t - \t" << static_cast<char>(stepUC) << endl;
	}
}
