#include <iostream>
#include < Windows.h >
using namespace std;


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_CTYPE, "ukr");

    int a, b;

    // �������� �������
    cout << "������ �������� a: ";
    cin >> a;
    cout << "������ �������� b: ";
    cin >> b;

    // ���������� ���������
    int* ptrA = &a;
    int* ptrB = &b;

    // ���� ������� ����� ���������
    *ptrA = *ptrA * 4;
    *ptrB = *ptrB / 5;

    // ���� ����������
    cout << "ϳ��� ���:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}