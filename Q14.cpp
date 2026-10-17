#include <iostream>
using namespace std;

int main() {
    int n, temp, digits = 0;
    long long sum = 0;

    cout << "Enter a non-negative number: ";
    cin >> n;

    if (n < 0) {
        cout << "Not an Armstrong number";
        return 0;
    }

    temp = n;

    do {
        digits++;
        temp /= 10;
    } while (temp != 0);

    temp = n;

    do {
        int digit = temp % 10;
        long long power = 1;

        for (int i = 0; i < digits; i++)
            power *= digit;

        sum += power;
        temp /= 10;
    } while (temp != 0);

    if (sum == n)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}