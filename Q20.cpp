#include <iostream>
using namespace std;

int main() {
    long long n, temp, reverse = 0;

    cout << "Enter a non-negative number: ";
    cin >> n;

    if (n < 0) {
        cout << "Enter a non-negative number";
        return 0;
    }

    temp = n;

    while (temp > 0) {
        int digit = temp % 10;

        if (reverse > (9223372036854775807LL - digit) / 10) {
            cout << "Number is too large to reverse";
            return 0;
        }

        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    cout << "Reverse = " << reverse << endl;

    if (reverse == n)
        cout << "Palindrome number";
    else
        cout << "Not a palindrome number";

    return 0;
}