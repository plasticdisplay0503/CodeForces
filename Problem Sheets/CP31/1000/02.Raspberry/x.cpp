#include <bits/stdc++.h>
using namespace std;

void helper1(vector<int> x,int k) {
    int mint=1000;

    for (int c:x) {
        if (c%k==0) {
            cout<<0; return;
        } else mint=min(mint,k-c%k);
    }

    cout<<mint; return;
}

void helper2 (vector<int> x,int k) {
    int even=0,odd1=0,odd3=0;

    for (int c:x) {
        if (c%2==0) {
            even ++;
            if (c%4==0) even++;
        } else {
            if (c%4==1) odd1++;
            else odd3++;
        }
    }

    if (even>=2) {
        cout<<0; return;
    } else if (even==1) {
        if (odd3 || odd1) {
            cout<<1; return;
        } else {
            cout<<2; return;
        }
    } else {
        if (odd3) {
            cout<<1;return;
        } else {
            cout<<2;return;
        }
    }


}

void solve() {
    int n,k; cin>>n>>k;
    vector<int> x(n);
    for (int i=0;i<n;i++) cin>>x[i];

    if (k!=4) helper1(x,k);
    else helper2(x,k);
    cout<<"\n"; return;
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
