#include <iostream>
using namespace std;

long long factorial(long long n) {
    if (n == 1)          // Base case
        return 1;

    return n * factorial(n - 1);   // Recursive case
}

int main() {
    long long N;
    cin >> N;

    cout << factorial(N);

    return 0;
}
