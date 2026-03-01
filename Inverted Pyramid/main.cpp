#include <iostream>
using namespace std;

void printSpaces(int n) {
    if (n == 0)
        return;
    cout << " ";
    printSpaces(n - 1);
}

void printStars(int n) {
    if (n == 0)
        return;
    cout << "*";
    printStars(n - 1);
}

void printInverted(int current, int N) {
    if (current > N)
        return;

    printSpaces(current - 1);                // Increasing spaces
    printStars(2 * (N - current) + 1);       // Decreasing stars
    cout << endl;

    printInverted(current + 1, N);           // Next line
}

int main() {
    int N;
    cin >> N;

    printInverted(1, N);

    return 0;
}
