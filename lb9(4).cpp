#include <iostream>
using namespace std;

int main() {
    int n, A;
    cout << "Введiть кiлькiсть елементiв масиву: ";
    cin >> n;

    int a[100];
    cout << "Введiть елементи масиву:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Введiть число A: ";
    cin >> A;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > A) {
            count++;
        }
    }

    cout << "Кiлькiсть елементiв, бiльших за A: " << count;
    return 0;
}
