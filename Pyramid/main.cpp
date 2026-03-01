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

void printPyramid(int current, int N) {
    if (current > N)
        return;

    printSpaces(N - current);          // Left spaces
    printStars(2 * current - 1);       // Stars
    cout << endl;

    printPyramid(current + 1, N);      // Next line
}

int main() {
    int N;
    cin >> N;

    printPyramid(1, N);

    return 0;
}
