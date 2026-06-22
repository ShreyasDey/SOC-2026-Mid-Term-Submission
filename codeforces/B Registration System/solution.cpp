#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> seen;
    while (n--) {
        string s;
        cin >> s;

        if (seen.find(s) == seen.end()) {
            seen[s] = 1;
            cout << "OK\n";
        } else {
            string newName = s + to_string(seen[s]);
            seen[s]++;
            seen[newName] = 1;
            cout << newName << "\n";
        }
    }
}
