#include <iostream>
using namespace std;

int main() {
    long long a, b;

    cout << "Enter two non-negative numbers: ";
    cin >> a >> b;

    if (a < 0 || b < 0) {
        cout << "Please enter non-negative numbers";
        return 0;
    }

    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }

    cout << "GCD = " << a;

    return 0;
}