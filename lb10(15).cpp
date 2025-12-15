#include <iostream>
using namespace std;

int main() {
    const int n = 3;
    int a[n][n];

    cout << "Введiть елементи масиву 3x3:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int sumMain = 0, sumSide = 0;

    for (int i = 0; i < n; i++) {
        sumMain += a[i][i];           // головна діагональ
        sumSide += a[i][n - 1 - i];   // побічна діагональ
    }

    cout << "Сума головної дiагоналi: " << sumMain << endl;
    cout << "Сума побiчної дiагоналi: " << sumSide;

    return 0;
}
