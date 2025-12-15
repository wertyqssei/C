#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введiть кiлькiсть елементiв масиву: ";
    cin >> n;

    int a[100];
    cout << "Введiть елементи масиву:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int index = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Масив не мiстить нульових елементiв.";
    } else {
        cout << "Номер першого нульового елемента: " << index;
    }

    return 0;
}
