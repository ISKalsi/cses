#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll printWayForNChessBoard(ll n) {
    ll totalWays = (n*n) * (n*n - 1) / 2;
    switch(n) {
        case 1: return 0;
        case 2: return totalWays;
        case 3: return totalWays - (4 * (n-1));
        default: return totalWays - (4 * (n-1) * (n-2));
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    short n; cin >> n;
    for (int i = 1; i <= n; ++i)
        cout << printWayForNChessBoard(i) << endl;
}
