#include <bits/stdc++.h>
using namespace std;
string s;
vector<bool> used;
vector<string> res;
string cur;
void gen()
{
    if (cur.size() == s.size())
    {
        res.push_back(cur);
        return;
    }
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (used[i])
            continue;
        if (i > 0 && s[i] == s[i - 1] && !used[i - 1])
            continue;
        used[i] = true;
        cur.push_back(s[i]);
        gen();
        cur.pop_back();
        used[i] = false;
    }
}
int main()
{
    cin >> s;
    sort(s.begin(), s.end());
    used.assign(s.size(), false);
    gen();
    cout << res.size() << "\n";
    for (const string &p : res)
        cout << p << "\n";
}
