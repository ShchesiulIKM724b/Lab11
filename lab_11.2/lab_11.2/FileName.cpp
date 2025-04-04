#include <iostream>
#include < Windows.h >
using namespace std;


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_CTYPE, "ukr");

    int n, m;

    // �������� ������ ������
    cout << "������ ����� ������ x[n]: ";
    cin >> n;
    cout << "������ ����� ������ y[m] (�� ����� 7): ";
    cin >> m;

    if (m < 7) {
        cout << "����� y ������� ���� ���������� 7 ��������!" << endl;
        return 1;
    }

    // �������� �������� ���'��
    int* x = new int[n];
    int* y = new int[m];

    // ���������� ������ x
    cout << "������ �������� ������ x:\n";
    for (int i = 0; i < n; i++) {
        cout << "x[" << i << "] = ";
        cin >> *(x + i);
    }

    // ���������� ������ y
    cout << "������ �������� ������ y:\n";
    for (int i = 0; i < m; i++) {
        cout << "y[" << i << "] = ";
        cin >> *(y + i);
    }

    // �������� ������ ������� ������� ������ (������ 6)
    int target = *(y + 6);

    // ����� ������� �������� target � ����� x
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(x + i) == target) {
            count++;
        }
    }

    // ���� ����������
    cout << "������ ������� ������ y = " << target << endl;
    cout << "ʳ������ �������� � ����� x: " << count << endl;

    // ��������� ���'��
    delete[] x;
    delete[] y;
}