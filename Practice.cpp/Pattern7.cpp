#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // spaces
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }

        // increasing numbers
        for (int j = i; j <= 2*i - 1; j++) {
            cout << j << " ";
        }

        // decreasing numbers
        for (int j = 2*i - 2; j >= i; j--) {
            cout << j << " ";
        }

        cout << endl;
    }
    return 0;
}
