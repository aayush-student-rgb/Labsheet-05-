#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    while (true) {
        cout << "Enter a number (0 to stop): ";
        cin >> n;

        if (n == 0)
            break;

        if (n > 0)
            count++;
    }

    cout << "Positive numbers count = " << count;
    return 0;
}