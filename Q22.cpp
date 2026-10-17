#include <iostream>
using namespace std;

int main() {
    int n, temp, sum = 0;

    cout << "Enter a positive number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Not a Harshad number";
        return 0;
    }

    temp = n;

    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (n % sum == 0)
        cout << "Harshad number";
    else
        cout << "Not a Harshad number";

    return 0;
}