//23 приклад
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 1.0;
    double b = 15.15;
    double y;

    y = log(b / a)
        + 1.3 * sin(b) * cos(a * b * exp(1))
        + 0.81 * sin(b)
        + 1.1 * cos(a);

    cout << "y = " << y << endl;

    return 0;
}
