#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int q; cin >> q;
    while (q--) {
        ll k; cin >> k;

        if (k < 10) {
            cout << k << endl;
            continue;
        }

        ll digits = 1;
        ll place = 1;
        ll maxIndex = 9;

        while (k > maxIndex) {
            ++digits;
            place *= 10;
            maxIndex += digits * 9 * place;
        }

        ll counter = (maxIndex - k) / digits;
        maxIndex -= counter * digits;

        ll numAtKthIndex = (place * 10 - 1) - counter;

        string numString = to_string(numAtKthIndex);
        int index = (digits - 1) - (maxIndex - k);
        cout << numString[index] << endl;
    }
}
