#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

bool canFinishPile(long small, long big) {
    long stepsToCover = big - small;
    if (stepsToCover > small) {
        return false;
    }

    long numsAfterStepsCovered = small - stepsToCover;
    return numsAfterStepsCovered % 3 == 0;
}

void printYesNo(bool isYes) {
    isYes ? cout << "YES" : cout << "NO";
    cout << "\n";
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    long t; cin >> t;
    while (t--) {
        long a, b;
        cin >> a >> b;
        
        if (a > b)
            printYesNo(canFinishPile(b, a));
        else
            printYesNo(canFinishPile(a, b));
    }
}

