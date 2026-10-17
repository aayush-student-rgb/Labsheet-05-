#include <iostream>
using namespace std;

int main() {
    int n, i = 0;
    long long a = 0, b = 1;

    cout << "Enter number of terms (0-90): ";
    cin >> n;

    if (n < 0 || n > 90) {
        cout << "Invalid number of terms";
        return 0;
    }

    while (i < n) {
        cout << a << " ";

        long long c = a + b;
        a = b;
        b = c;
        i++;
    }

    return 0;
}