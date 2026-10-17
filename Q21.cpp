#include <iostream>
using namespace std;

int main() {
    long long n;
    int evenSum = 0, oddSum = 0;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
        n = -n;

    do {
        int digit = n % 10;

        if (digit % 2 == 0)
            evenSum += digit;
        else
            oddSum += digit;

        n /= 10;
    } while (n != 0);

    cout << "Sum of even digits = " << evenSum << endl;
    cout << "Sum of odd digits = " << oddSum;

    return 0;
}