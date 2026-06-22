#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPalin(ll x){
    string s = to_string(x);
    int l = 0, r = s.size()-1;
    while(l < r) if(s[l++] != s[r--]) return false;
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll ans_a = -1;
        for(ll a = n%12; a <= n; a += 12){
            if(isPalin(a)){
                ans_a = a;
                break;
            }
        }
        if(ans_a == -1) cout << -1 << "\n";
        else cout << ans_a << " " << (n - ans_a) << "\n";
    }
}
