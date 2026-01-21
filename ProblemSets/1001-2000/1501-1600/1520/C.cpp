#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    if (n==2) {
        cout<<"-1\n";return;
    }

    int count=1;
    for (int i=1;i<=n*n;i+=2) {
        cout<<i;
        if (count<n) {
            cout<<" ";count++;
        } else {
            cout<<"\n"; count=1;
        }
    }

    for (int i=2;i<=n*n;i+=2) {
        cout<<i;
        if (count<n) {
            cout<<" ";count++;
        } else {
            cout<<"\n"; count=1;
        }
    }
    // cout<<"\n";
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
