#include <iostream>
using namespace std;

int main() {
    const int MAX_N = 50;
    int n;

    cin >> n;

    if (n <= 1) {
        cout << "The number must be greater than 1\n";
        return 0;
    }
    if (n > MAX_N) {
        cout << "Sorry, the side size is too big\n";
        return 0;
    }

    cout << '+' << string(n, '-') << '+' << '\n';

    for (int i = 0; i < n; i++)
        cout << '|' << string(n, ' ') << '|' << '\n';

    cout << '+' << string(n, '-') << '+' << '\n';

    return 0;
}
