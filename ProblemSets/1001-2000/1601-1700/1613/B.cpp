#include <bits/stdc++.h>
using namespace std;

int min(vector<int> x) {
    int m=10000000;
    for (int y:x) m=min(y,m);
    return m;
}
void solve() {
    int n; cin>>n;
    vector<int> a(n);

    for (int i=0;i<n;i++) cin>>a[i];
    int m=min(a);

    int count=n/2;

    for (int x:a) {
        if (x!=m) {
            cout<<x<<" "<<m<<"\n";
            count--;
        }
        
        if (!count) break;
    }

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
