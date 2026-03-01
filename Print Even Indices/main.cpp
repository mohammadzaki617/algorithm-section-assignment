#include <iostream>
using namespace std;

void printEvenReverse(int arr[], int n, int index) {
    if (index >= n)   // Base case
        return;

    printEvenReverse(arr, n, index + 2);  // Move to next even index
    cout << arr[index] << " ";            // Print after recursion
}

int main() {
    int N;
    cin >> N;

    int a
    rr[1005];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    printEvenReverse(arr, N, 0);

    return 0;
}

