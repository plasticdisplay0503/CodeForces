#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    int count=0;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if (x+y+z>=2) count++;
    }

    cout<<count;
    return 0;
}
