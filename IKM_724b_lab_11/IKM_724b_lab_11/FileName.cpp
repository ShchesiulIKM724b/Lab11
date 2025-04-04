#include <iostream>
#include < Windows.h >
using namespace std;


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_CTYPE, "ukr");

    int a, b;

    // Введення значень
    cout << "Введіть значення a: ";
    cin >> a;
    cout << "Введіть значення b: ";
    cin >> b;

    // Оголошення покажчиків
    int* ptrA = &a;
    int* ptrB = &b;

    // Зміна значень через покажчики
    *ptrA = *ptrA * 4;
    *ptrB = *ptrB / 5;

    // Вивід результату
    cout << "Після змін:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}