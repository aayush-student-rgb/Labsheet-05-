#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0;

    cout << "Enter the value of N (0-300000): ";
    cin >> n;

    if (n < 0 || n > 300000) {
        cout << "Invalid value of N";
        return 0;
    }

    for (int i = 1; i <= n; i++)
        sum += 1LL * i * i;

    cout << "Sum of squares = " << sum;

    return 0;
}