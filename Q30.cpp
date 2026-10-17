#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0;

    cout << "Enter the value of N (0-200000): ";
    cin >> n;

    if (n < 0 || n > 200000) {
        cout << "Invalid value of N";
        return 0;
    }

    for (int i = 1; i <= n; i++)
        sum += 1LL * i * i * i;

    cout << "Sum of cubes = " << sum;

    return 0;
}