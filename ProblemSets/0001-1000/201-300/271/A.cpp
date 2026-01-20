#include <bits/stdc++.h>
using namespace std;

bool helper(int x) {
    vector<int> y(10,0);
    while (x) {
        int z=x%10;
        y[z]++;x/=10;
    }

    for (int z:y) {
        if (z>1) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    n++;
    while (true) {
        if (helper(n)) break;
        else n++;

        // cout<<n<<"\n";
    }
    cout<<n;
    return 0;
}
