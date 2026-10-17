#include <iostream>
using namespace std;

int main() {
    long long a, b;

    cout << "Enter two positive numbers: ";
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "Please enter positive numbers";
        return 0;
    }

    long long x = a, y = b;

    while (y != 0) {
        long long r = x % y;
        x = y;
        y = r;
    }

    cout << "LCM = " << (a / x) * b;

    return 0;
}