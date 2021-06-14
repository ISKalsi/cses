#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

template<typename dynamic>
void print(dynamic obj) {
    cout << obj << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n; cin >> n;
    ll fives = 0;
    for (int i = 5; n/i >= 1; i *= 5) {
        fives += n / i;
    }

    cout << fives << endl;
}
