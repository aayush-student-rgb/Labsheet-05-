#include <iostream>
using namespace std;

int main() {
    int n, temp;
    long long sum = 0;

    cout << "Enter a non-negative number: ";
    cin >> n;

    if (n < 0) {
        cout << "Not a strong number";
        return 0;
    }

    temp = n;

    do {
        int digit = temp % 10;
        int fact = 1;

        for (int i = 1; i <= digit; i++)
            fact *= i;

        sum += fact;
        temp /= 10;
    } while (temp != 0);

    if (sum == n)
        cout << "Strong number";
    else
        cout << "Not a strong number";

    return 0;
}