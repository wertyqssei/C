#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter three-digit number: ";
    cin >> N;

    int a = N / 100;
    int b = (N / 10) % 10;
    int c = N % 10;

    int count = 0;

    if (a % 2 != 0) count++;
    if (b % 2 != 0) count++;
    if (c % 2 != 0) count++;

    cout << "Number of odd digits: " << count << endl;

    return 0;
}
