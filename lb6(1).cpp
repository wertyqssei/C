#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    int sum = 0;

    while (N > 0) {
        int d = N % 10;
        if (d > 5) sum += d;
        N /= 10;
    }

    cout << sum;
    return 0;
}
