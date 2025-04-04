#include <iostream>
#include < Windows.h >
using namespace std;


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_CTYPE, "ukr");

    int n, m;

    // Введення розмірів масивів
    cout << "Введіть розмір масиву x[n]: ";
    cin >> n;
    cout << "Введіть розмір масиву y[m] (не менше 7): ";
    cin >> m;

    if (m < 7) {
        cout << "Масив y повинен мати щонайменше 7 елементів!" << endl;
        return 1;
    }

    // Динамічне виділення пам'яті
    int* x = new int[n];
    int* y = new int[m];

    // Заповнення масиву x
    cout << "Введіть елементи масиву x:\n";
    for (int i = 0; i < n; i++) {
        cout << "x[" << i << "] = ";
        cin >> *(x + i);
    }

    // Заповнення масиву y
    cout << "Введіть елементи масиву y:\n";
    for (int i = 0; i < m; i++) {
        cout << "y[" << i << "] = ";
        cin >> *(y + i);
    }

    // Отримуємо сьомий елемент другого масиву (індекс 6)
    int target = *(y + 6);

    // Пошук кількості входжень target в масиві x
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(x + i) == target) {
            count++;
        }
    }

    // Вивід результату
    cout << "Сьомий елемент масиву y = " << target << endl;
    cout << "Кількість входжень у масиві x: " << count << endl;

    // Звільнення пам'яті
    delete[] x;
    delete[] y;
}