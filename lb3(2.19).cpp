#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number (0-5): ";
    cin >> n;

    switch (n) {
        case 0: cout << "Zero - Нуль"; break;
        case 1: cout << "One - Один"; break;
        case 2: cout << "Two - Два"; break;
        case 3: cout << "Three - Три"; break;
        case 4: cout << "Four - Чотири"; break;
        case 5: cout << "Five - П'ять"; break;
        default: cout << "Invalid number";
    }

    return 0;
}
