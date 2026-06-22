#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> x(n);
    for(auto& v : x) scanf("%lld", &v);

    for(int i = 0; i < n; i++){
        long long mn, mx;
        mx = max(x[i] - x[0], x[n-1] - x[i]);
        if(i == 0)         mn = x[1] - x[0];
        else if(i == n-1)  mn = x[n-1] - x[n-2];
        else               mn = min(x[i] - x[i-1], x[i+1] - x[i]);
        printf("%lld %lld\n", mn, mx);
    }
}
