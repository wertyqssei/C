#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введiть кiлькiсть елементiв масиву: ";
    cin >> n;

    if (n < 2) {
        cout << "Помилка: потрiбно щонайменше 2 елементи.";
        return 0;
    }

    int a[100];
    cout << "Введiть елементи масиву (рiзнi числа):\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max1, max2;

    if (a[0] > a[1]) {
        max1 = a[0];
        max2 = a[1];
    } else {
        max1 = a[1];
        max2 = a[0];
    }

    for (int i = 2; i < n; i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2) {
            max2 = a[i];
        }
    }

    cout << "Другий за величиною елемент: " << max2;
    return 0;
}
