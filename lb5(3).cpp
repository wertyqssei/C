#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, h, x, y;

    cout << "Введiть a, b та h: ";
    cin >> a >> b >> h;

    x = a;

    cout << "-------------------------\n";
    cout << ":    X    :     Y       :\n";
    cout << "-------------------------\n";

    while (x <= b) {
        if (x == 7 || x == -5) {
            cout << "Помилка: x = " << x 
                 << " не належить ОДЗ (знаменник = 0)\n";
            break;
        }

        y = 8.0 / (x - 7) + 7.0 / (5 + x);

        cout << ": " << x << " : " << y << " :\n";

        x += h;
    }

    cout << "-------------------------\n";
    return 0;
}
