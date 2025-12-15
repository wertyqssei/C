//19 приклад
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 4.0;
    double b = 0.707;
    double y;

    y = (1 - cos(M_PI * b / a) + 20.5 * 0.3 * exp(a * b)) /
        (1 - sin(M_PI * b / a) + sin(M_PI * b / a));

    cout << "y = " << y << endl;

    return 0;
}
