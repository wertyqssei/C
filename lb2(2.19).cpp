//2.19
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    if ((x * x + y * y <= 25) && (y >= 0)) {
        cout << "Point belongs to the shaded area" << endl;
    }
    else {
        cout << "Point does NOT belong to the shaded area" << endl;
    }

    return 0;
}
