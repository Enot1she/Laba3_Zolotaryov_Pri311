#include <iostream>
#include <clocale>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	int read = 0;
	cout << noboolalpha; cout << boolalpha;
	cout << "Тип данных ------------------- Размер типа (Bytes) ----------- Min значение ---------- Max значение" << endl;
	cout << "bool" << "\t\t\t\t" << sizeof(bool) << " bytes" << "\t\t\t\t" << numeric_limits<bool>::min() << "\t\t\t" << numeric_limits<bool>::max() << endl;
	cout << "short" << "\t\t\t\t" << sizeof(short) << " bytes" << "\t\t\t\t" << numeric_limits<short>::min() << "\t\t\t" << numeric_limits<short>::max() << endl;
	cout << "unsigned short" << "\t\t\t" << sizeof(unsigned short) << " bytes" << "\t\t\t\t" << numeric_limits<unsigned short>::min() << "\t\t\t" << numeric_limits<unsigned short>::max() << endl;
	cout << "int" << "\t\t\t\t" << sizeof(int) << " bytes" << "\t\t\t\t" << numeric_limits<int>::min() << "\t\t" << numeric_limits<int>::max() << endl;
	cout << "unsigned int" << "\t\t\t" << sizeof(unsigned int) << " bytes" << "\t\t\t\t" << numeric_limits<unsigned int>::min() << "\t\t\t" << numeric_limits<unsigned int>::max() << endl;
	cout << "long" << "\t\t\t\t" << sizeof(long) << " bytes" << "\t\t\t\t" << numeric_limits<long>::min() << "\t\t" << numeric_limits<long>::max() << endl;
	cout << "unsigned long" << "\t\t\t" << sizeof(unsigned long) << " bytes" << "\t\t\t\t" << numeric_limits<unsigned long>::min() << "\t\t\t" << numeric_limits<unsigned long>::max() << endl;
	cout << "long long" << "\t\t\t" << sizeof(long long) << " bytes" << "\t\t\t\t" << numeric_limits<long long>::min() << "\t" << numeric_limits<long long>::max() << endl;
	cout << "unsigned long long" << "\t\t" << sizeof(unsigned long long) << " bytes" << "\t\t\t\t" << numeric_limits<unsigned long long>::min() << "\t\t\t" << numeric_limits<unsigned long long>::max() << endl;
	cout << "float" << "\t\t\t\t" << sizeof(float) << " bytes" << "\t\t\t\t" << numeric_limits<float>::min() << "\t\t" << numeric_limits<float>::max() << endl;
	cout << "double" << "\t\t\t\t" << sizeof(float) << " bytes" << "\t\t\t\t" << numeric_limits<double>::min() << "\t\t" << numeric_limits<double>::max() << endl;
	cout << "char" << "\t\t\t\t" << sizeof(char) << " bytes" << "\t\t\t\t" << static_cast<int>(numeric_limits<char>::min()) << "\t\t\t" << static_cast<int>(numeric_limits<char>::max()) << endl;
}
