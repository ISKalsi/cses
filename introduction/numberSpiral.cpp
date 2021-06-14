#include<iostream>
#define ll long long
using namespace std;

bool rowBig(ll x, ll y) {
    return x > y;
}

int main() {
    int t; cin >> t;
    ll x, y;

    // 1 3 7 13 21
    //   1 3  7 13
    // 1 2 4  6  8
    // tn = 2n
    // sn = n2 - n + 1
    while(t--) {
        cin >> x >> y;
        ll ans;
        if(x > y) {
            ll diag = x*x - x + 1;

            if(x % 2 != 0) {
                // -x -> x
                // y -> -y
                ans = diag - (x-y);
            } else {
                // x -> -x
                // -y -> y
                ans = diag + (x-y);
            }
        } else {
            ll diag = y*y - y + 1;

            if(y % 2 != 0) {
                ans = diag + (y-x);
            } else {
                ans = diag - (y-x);
            }
        }
        cout << ans <<endl;
    }
}
