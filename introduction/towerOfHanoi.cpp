#include<bits/stdc++.h>

using namespace std;

void towerOfHanoi(int disks, int moveFrom, int auxiliary, int moveTo) {
    if (!disks) return;
    towerOfHanoi(disks - 1, moveFrom, moveTo, auxiliary); 
    cout << moveFrom << " " << moveTo << "\n";
    towerOfHanoi(disks - 1, auxiliary, moveFrom, moveTo);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int disks; cin >> disks;
    cout << int(1 << disks) - 1 << "\n";
    towerOfHanoi(disks, 1, 2, 3);
}
