#include <iostream>
#include <clocale>

using namespace std;



int main()
{
    setlocale(LC_ALL, "Russian");
    bool a = false;
    bool b = false;
    string stuff(40, '_'); // Создание конструктора, который позволяет позже вывести 40шт "_"
    cout << boolalpha;
    cout << "a \t\t b\t\t!a && !b" << endl << stuff << endl;
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            a = i;
            b = j;
            cout << a << "\t\t" << b << "\t\t  " << (!a && !b) << endl;
        }
    }
    cout << stuff << endl << endl;
    cout << "a \t\t b\t\t!(a || b)" << endl << stuff << endl;
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            a = i;
            b = j;
            cout << a << "\t\t" << b << "\t\t  " << !(a || b) << endl;
        }
    }
    cout << stuff << endl << endl;
    bool x = false;
    bool y = false;
    bool z = false;
    string stuff2(70, '_'); // Создание конструктора, который позволяет позже вывести 70шт "_"
    cout << "x \t\t y\t\t z\t\t(x && !y) || z" << endl << stuff2 << endl;
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            for (int k = 0; k <= 1; k++) {
                x = i;
                y = j;
                z = k;
                cout << x << "\t\t" << y << "\t\t" << z << "\t\t  " << ((x && !y) || z) << endl;
            }
        }
    }
    cout << stuff2 << endl << endl;
    cout << "x \t\t y\t\t z\t\t!(x || y) && (y && z)" << endl << stuff2 << endl;
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            for (int k = 0; k <= 1; k++) {
                x = i;
                y = j;
                z = k;
                cout << x << "\t\t" << y << "\t\t" << z << "\t\t  " << (!(x || y) && (y && z)) << endl;
            }
        }
    }
    cout << stuff2 << endl << endl;
    cout << "x \t\t y\t\t z\t\tx && !(y &&(x || !z))" << endl << stuff2 << endl;
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            for (int k = 0; k <= 1; k++) {
                x = i;
                y = j;
                z = k;
                cout << x << "\t\t" << y << "\t\t" << z << "\t\t  " << (x && !(y && (x || !z))) << endl;
            }
        }
    }
    cout << stuff2 << endl << endl;
    return 0;
}