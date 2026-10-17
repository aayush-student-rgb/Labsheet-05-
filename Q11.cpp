#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    unsigned long long fact = 1;

    cout << "Enter a number (0-20): ";
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Enter a number between 0 and 20";
        return 0;
    }

    while (i <= n) {
        fact *= i;
        i++;
    }

    cout << "Factorial = " << fact;
    return 0;
}