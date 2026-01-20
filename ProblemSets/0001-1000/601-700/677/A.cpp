#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,h; cin>>n>>h;
    int count=0;

    while (n--) {
        int x; cin>>x;
        if (x>h) count+=2;
        else count++;
    }

    cout<<count;
    return 0;
}
