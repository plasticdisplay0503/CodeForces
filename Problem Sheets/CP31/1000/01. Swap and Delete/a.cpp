#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin>>s;
    // if (s.size()==1) {
    //     cout<<"1\n"; return; 
    // }

    int zero=0,one=0;
    for (char c:s){
        if (c=='0') zero++;
        else one++;
    }

    int count=0;
    int idx=0;

    while (zero>=0 && one>=0 && idx<s.size()) {
        if (s[idx]=='1') {
            if (zero) {
                zero--; count++;
            } else break;
        } else {
            if (one) {
                one--;count++;
            } else break;
        }

        idx++;
    }

    cout<<s.size()-count<<"\n";
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
