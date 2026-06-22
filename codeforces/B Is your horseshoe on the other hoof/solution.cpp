#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> a;
    for (int i = 0; i < 4; i++)
    {
        int t;
        cin >> t;
        a.insert(t);
    }
    cout << 4 - a.size();
}
