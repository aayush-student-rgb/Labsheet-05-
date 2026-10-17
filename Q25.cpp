#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 2) {
        cout << "No prime factors";
        return 0;
    }

    cout << "Prime factors: ";

    for (int i = 2; i <= n / i; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    if (n > 1)
        cout << n;

    return 0;
}