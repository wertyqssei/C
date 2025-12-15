#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;

    cout << "Введiть 5 значень x:\n";
    for (int i = 0; i < 5; i++) {
        cin >> x;
        y = 5 * x - 15 + sin(5 * x);
        cout << "y = " << y << endl;
    }

    return 0;
}
