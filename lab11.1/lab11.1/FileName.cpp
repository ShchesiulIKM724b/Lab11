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

    // �������� �������� ���'��
    ptr1 = new char;
    ptr2 = new char;

    // �������� ������� � ���������
    cout << "������ ������ ��� ptr1: ";
    cin >> *ptr1;

    cout << "������ ������ ��� ptr2: ";
    cin >> *ptr2;

    // ��������� �������� ����� ����� �� 2 (ASCII-���)
    *ptr1 = *ptr1 + 2;

    // ��������� ����������
    cout << "�������� ptr1 ���� ��������� �� 2: " << *ptr1 << endl;
    cout << "�������� ptr2: " << *ptr2 << endl;

    // ��������� ���'��
    delete ptr1;
    delete ptr2;
}