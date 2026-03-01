#include <iostream>
using namespace std;

void printDigits(long long n) {
    if (n < 10) {          // Base case: single digit
        cout << n << " ";
        return;
    }

    printDigits(n / 10);   // Recursive call (remove last digit)
    cout << n % 10 << " "; // Print last digit
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        if (N == 0) {      // Special case for 0
            cout << 0;
        } else {
            printDigits(N);
        }

        cout << endl;
    }

    return 0;
}
