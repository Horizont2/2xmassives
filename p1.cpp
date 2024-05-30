#include <iostream>
#include <limits>

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

    int sum = 0;
    int minElement = numeric_limits<int>::max();
    int maxElement = numeric_limits<int>::min();
    int totalElements = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int element = array[i][j];
            sum += element;
            if (element < minElement) minElement = element;
            if (element > maxElement) maxElement = element;
            totalElements++;
        }
    }

    double average = static_cast<double>(sum) / totalElements;

    cout << "Сума: " << sum << endl;
    cout << "Середнє арифметичне: " << average << endl;
    cout << "Мінімальний елемент: " << minElement << endl;
    cout << "Максимальний елемент: " << maxElement << endl;

    return 0;
}
