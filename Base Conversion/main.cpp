#include <iostream>
using namespace std;

void toBinary(long long n) {
    if (n == 0)   // Base case
        return;

    toBinary(n / 2);     // Recursive call
    cout << n % 2;       // Print remainder
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        if (N == 0)
            cout << 0;
        else
            toBinary(N);

        cout << endl;
    }

    return 0;
}
