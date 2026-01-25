#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve() {
    ll n; cin>>n;
    ll count=0;
    vector<ll> fi,se;

    while (n--) {
        ll m; cin>>m;

        vector<ll> a(m);
        for (int i=0;i<m;i++) cin>>a[i];
        sort(a.begin(),a.end());

        ll mini=a[0],sec=a[1];        
        count+=sec;
        fi.push_back(mini),se.push_back(sec);
    }

    sort(fi.begin(),fi.end()); sort(se.begin(),se.end());

    cout<<count+fi[0]-se[0];
    cout<<"\n";
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
