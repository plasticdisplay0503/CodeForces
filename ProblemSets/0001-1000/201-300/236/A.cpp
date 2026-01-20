#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    set<char> x;

    for (char c:s) {
        x.insert(c);
    }
    int n=x.size();
    // cout<<n;
    cout<<(n%2==0 ? "CHAT WITH HER!":"IGNORE HIM!");
    return 0;
}
