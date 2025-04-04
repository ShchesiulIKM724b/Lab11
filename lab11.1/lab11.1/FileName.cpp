#include <iostream>
#include < Windows.h >
using namespace std;


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_CTYPE, "ukr");

    char* ptr1;
    char* ptr2;

    // Виділення динамічної пам'яті
    ptr1 = new char;
    ptr2 = new char;

    // Введення значень з клавіатури
    cout << "Введіть символ для ptr1: ";
    cin >> *ptr1;

    cout << "Введіть символ для ptr2: ";
    cin >> *ptr2;

    // Збільшення значення першої змінної на 2 (ASCII-код)
    *ptr1 = *ptr1 + 2;

    // Виведення результатів
    cout << "Значення ptr1 після збільшення на 2: " << *ptr1 << endl;
    cout << "Значення ptr2: " << *ptr2 << endl;

    // Звільнення пам'яті
    delete ptr1;
    delete ptr2;
}