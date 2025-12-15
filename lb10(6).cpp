#include <iostream>
using namespace std;

int main() {
    const int m = 4, n = 7;
    int a[m][n];

    cout << "Введiть елементи масиву 4x7:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int min = a[0][0];
    int minRow = 0, minCol = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    cout << "Мiнiмальний елемент: " << min << endl;
    cout << "Номер (i, j): (" << minRow << ", " << minCol << ")";

    return 0;
}
