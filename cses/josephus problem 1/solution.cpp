#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    list<int> circle;
    for (int i = 1; i <= n; i++)
        circle.push_back(i);
    auto it = circle.begin();
    while (!circle.empty())
    {
        it++;
        if (it == circle.end())
            it = circle.begin();
        cout << *it << " ";
        it = circle.erase(it);
        if (it == circle.end())
            it = circle.begin();
    }
}
