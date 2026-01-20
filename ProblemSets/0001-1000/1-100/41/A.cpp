#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s,k;
    cin>>s>>k;

    reverse(k.begin(),k.end());
    cout<<(s==k ? "YES" :"NO");
    return 0;
}
