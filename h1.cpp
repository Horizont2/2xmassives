#include <iostream>

using namespace std;

int main() {
    int rows, cols;
    cout << "Введіть кількість рядків: ";
    cin >> rows;
    cout << "Введіть кількість стовпців: ";
    cin >> cols;

    int array[rows][cols];

    int N;
    cout << "Введіть початкове число: ";
    cin >> N;
    array[0][0] = N;
    for (int i = 0; i < rows; ++i) {
        for (int j = (i == 0 ? 1 : 0); j < cols; ++j) {
            if (i == 0 && j == 0) {
                continue;
            } else if (j == 0) {
                array[i][j] = array[i - 1][cols - 1] * 2;
            } else {
                array[i][j] = array[i][j - 1] * 2;
            }
        }
    }
    cout << "Створений масив:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
