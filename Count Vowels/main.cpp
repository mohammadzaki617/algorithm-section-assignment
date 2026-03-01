#include <iostream>
using namespace std;

int countVowels(string s, int index) {
    if (index == s.length())   // Base case
        return 0;

    char c = tolower(s[index]);

    int count = 0;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        count = 1;

    return count + countVowels(s, index + 1);
}

int main() {
    string S;
    getline(cin, S);   // To read spaces

    cout << countVowels(S, 0);

    return 0;
}
