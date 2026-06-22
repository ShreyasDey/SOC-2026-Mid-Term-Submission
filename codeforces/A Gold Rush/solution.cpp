#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n, m;
        cin >> n >> m;
        if(m > n){
            cout << "NO\n";
            continue;
        }
        long long g = __gcd(n, m);
        n /= g;
        m /= g;
        int th = 0, to = 0;
        while(n % 3 == 0) { n /= 3; th++; }
        while(m % 2 == 0) { m /= 2; to++; }
        cout << (th >= to && n == 1 && m == 1 ? "YES" : "NO") << "\n";
    }
    return 0;
}
