
#include <iostream>
using namespace std;

// function to calculate nCr
int nCr(int n, int r) {
    int res = 1;
    if (r > n - r)
        r = n - r;

    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        // spaces
        for (int space = 0; space < n - i - 1; space++)
            cout << " ";

        // values
        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}
