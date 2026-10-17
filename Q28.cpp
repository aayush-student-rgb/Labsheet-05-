#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0;

    cout << "Enter the value of N: ";
    cin >> n;

    if (n < 0) {
        cout << "Enter a non-negative number";
        return 0;
    }

    for (int i = 1; i <= n; i++)
        sum += i;

    cout << "Sum = " << sum;

    return 0;
}