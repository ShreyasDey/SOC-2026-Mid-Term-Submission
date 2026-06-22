#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> b(n);
        for(int i = 0; i < n; i++) cin >> b[i];
        sort(b.begin(), b.end(), greater<int>());
        bool ok = true;
        for(int i = 0; i <= n-3; i++){
            if(b[i] % b[i+1] != b[i+2]){
                ok = false;
                break;
            }
        }
        if(ok){
            cout<<b[0]<<" "<<b[1]<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}
