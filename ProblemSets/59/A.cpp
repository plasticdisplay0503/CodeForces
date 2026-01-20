#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin>>s;
    int n=s.size();
    int low=0;
    for (char c:s) {
        if ((int)c>=97) low++;
    }

    int high=n-low;

    if (low>=high) {
        for (char c:s) {
            cout<<((int)c<97?(char)((int)c+32):c);
        }
    } else {
        for (char c:s) {
            cout<<((int)c>=97 ? (char)((int)c-32):c);
        }
    }
    // cout<<"\n";
    // cout<<low<<" "<<n-low<<" "<<n/2<<"\n";
    return 0;
}
