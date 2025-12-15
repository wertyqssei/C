#include <iostream>
using namespace std;

int main() {
    const int m = 4, n = 3;
    int a[m][n];

    cout << "Введiть елементи масиву 4x3:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    for (int i = 0; i < m; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i][j] % 2 == 0)
                count++;
        }
        cout << "Кiлькiсть парних елементiв у рядку " << i << ": " << count << endl;
    }

    return 0;
}
