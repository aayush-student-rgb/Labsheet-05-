#include <iostream>
using namespace std;
int main() {
    int n, key;
    bool found = false;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter number to search: ";
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            found = true;
            break;
        }
    }
    if (found) cout << "Number found";
    else cout << "Number not found";
    return 0;
}