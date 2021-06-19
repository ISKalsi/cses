#include<bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, x;
    cin >> n >> x;

    int childrenWeight[n];
    for(int i = 0; i < n; ++i) {
        cin >> childrenWeight[i];
    }

    sort(childrenWeight, childrenWeight + n);

    int i, j, gandolas;
    i = gandolas = 0;
    j = n-1;

    while(i <= j) {
        if(childrenWeight[i] + childrenWeight[j] <= x) {
            ++i; --j;
            ++gandolas;
        } else {
            --j;
            ++gandolas;
        }
    } 

    cout << gandolas;
}
