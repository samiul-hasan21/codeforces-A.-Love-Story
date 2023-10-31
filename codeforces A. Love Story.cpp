#include <iostream>
#include <string>

using namespace std;

int countDifferences(const string& s) {
    string target = "codeforces";
    int diffCount = 0;

    for (int i = 0; i < 10; i++) {
        if (s[i] != target[i])
            diffCount++;
    }

    return diffCount;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int diffCount = countDifferences(s);
        cout << diffCount << endl;
    }

    return 0;
}
