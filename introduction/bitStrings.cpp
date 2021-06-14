#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int power; cin >> power;

    ll ans = 1;
    for (int i = 0; i < power; ++i) {
        ans = ans * 2 % int(1e9 + 7);
    }

    cout << ans;
}

