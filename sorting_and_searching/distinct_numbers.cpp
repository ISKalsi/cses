#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    set<long> nums;
    long n, x; cin >> n;
    while (n--) {
        cin >> x;
        nums.insert(x);
    }

    cout << nums.size();
}
