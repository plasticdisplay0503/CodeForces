#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int ceil(ll a,ll b) {
    return (a+b-1)/b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        ll x=ceil(n,k);
        cout<<ceil(x*k,n)<<"\n";
    }
    return 0;
}
