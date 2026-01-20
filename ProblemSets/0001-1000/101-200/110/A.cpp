#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n; cin>>n;        // 10^18 creates overflow issue
    int count=0;
    while (n) {
        int x=(n%10);
        if (x==4 || x==7) {
            count++;
            // cout<<x<<"\n";
        }
        n/=10;
    }

    // cout<<count<<"\n";
    cout<<(count==4 || count==7 ? "YES":"NO");    
    return 0;
}
