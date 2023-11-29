#include <iostream>
#include <locale>

using namespace std;

/*
*Лабораторная работа 6. Задание 1. Индивидуальный вариант 24. Статический массив
*Найти номер последней строки матрицы, где все числа четные. Если таких строк нет - вывести 0.
* return 0 - все ок. return 1 - ошибка.
*/

int main() {
    setlocale(LC_ALL, "ru");

    int M, N;

    cout << "Введите количество строк М: ";
    cin >> M;
    cout << "Введите количество столбцов N: ";
    cin >> N;

    if (M <= 0 || N <= 0 || M > 50 || N > 50) {
        cerr << "Количество строк и столбцов должно быть натуральным числом и не более 50!";
        return 1;
    }

    int matrix[50][50];
    cout << "Введите элементы матрицы: " << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];    
        }
    }

    int evenstr = 0;
    for (int i = 0; i < M; i++) {
        bool even = true;
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] % 2 != 0) {
                even = false;
                break;
            }
        }
        if (even > 0) {
            evenstr = i + 1;
        }
    }

    if (evenstr > 0) {
        cout << "Номер последней строки с четными числами: " << evenstr;
    }
    else {
        cout << 0;
    }
}