#include<bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    set<array<int, 2>> s;
    int n; cin >> n;

    while(n--) {
        int arrival, leave;
        cin >> arrival >> leave;
        s.insert({arrival, 1});
        s.insert({leave, -1});
    }

    int maxNumber = 0, currentNumber = 0;
    for(auto i: s) {
        currentNumber += i[1];
        maxNumber = max(currentNumber, maxNumber);
    }

    cout << maxNumber;
}
