#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Введіть кількість рядків: ";
    cin >> rows;
    cout << "Введіть кількість стовпців: ";
    cin >> cols;
    
    int array[rows][cols];
    
    cout << "Введіть елементи масиву:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> array[i][j];
        }
    }
    int rowSum[100] = {0};
    int colSum[100] = {0};
    int totalSum = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            rowSum[i] += array[i][j];
            colSum[j] += array[i][j];
            totalSum += array[i][j];
        }
    }
    cout << "Суми в рядках:" << endl;
    for (int i = 0; i < rows; ++i) {
        cout << "Рядок " << i + 1<< ": " << rowSum[i] << endl;
    }

    cout << "Суми в стовпцях:" << endl;
    for (int j = 0; j < cols; ++j) {
        cout << "Стовпець " << j + 1<< ": " << colSum[j] << endl;
    }
    cout << "Загальна сума: " << totalSum << endl;
    return 0;
}
