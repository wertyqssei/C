//1.9
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;

    cout << "Enter x: ";
    cin >> x;

    if (x < 0) {
        y = pow(x, 2) + 3;
    }
    else if (x >= 0 && x <= 5) {
        y = sin(x) + cos(x);
    }
    else {
        y = log(x) + sqrt(x);
    }

    cout << "y = " << y << endl;

    return 0;
}
