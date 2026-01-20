#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;string s; cin>>n>>s;
    int a=0;

    for (char c:s) {
        if (c=='A') a++;
    }

    int d=n-a;

    if (a!=d) {
        if (a>d) cout<<"Anton";
        else cout<<"Danik";
    } else cout<<"Friendship";
    return 0;
}
