#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve() {
    long long x1,p1,x2,p2;
    cin>>x1>>p1>>x2>>p2;

    // Idea- We will keep dividing x1,x2 till they are divisible by 10
    while (x1%10==0) {
        p1++;x1/=10;
    }

    while (x2%10==0) {
        p2++;x2/=10;
    }

    // Now we will make the minimum of p1,p2 equal to zero
    // As after a certain point it is just accumulating bits and have no contribution significantly
    long long p=min(p1,p2);
    p1-=p;p2-=p;

    // Checking edge cases for example p1=10000,p2=0 now will cause overflow
    // Checking p=7 as maxmimum limit is 10^6 for x1,x2
    if (p1>=7) {
        cout<<">\n"; 
        return;
    } 

    if (p2>=7) {
        cout<<"<\n";
        return;
    }

    for (int i=0;i<p1;i++) x1*=10;
    for (int i=0;i<p2;i++) x2*=10;

    if (x1!=x2) {
        cout<<(x1>x2 ? ">\n":"<\n");
        return;
    } 

    cout<<"=\n"; return;

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
