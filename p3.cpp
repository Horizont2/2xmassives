#include <iostream>
using namespace std;

int main() {
    int array1[5][10];
    int array2[5][5];

    cout << "Введіть елементи першого масиву 5x10: " << endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 10; ++j) {
            cin >> array1[i][j];
        }
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            array2[i][j] = array1[i][2 * j] + array1[i][2 * j + 1];
        }
    }
    cout << "Перший масив 5x10: " << endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Другий масив 5x5: " << endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
