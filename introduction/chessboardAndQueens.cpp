#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    char chessboard[8][8];
    for(auto &row: chessboard)
        for(auto &column: row)
            cin >> column;

    bool diagonalCheck[15];

    int columnPositions[8];
    iota(columnPositions, columnPositions + 8, 0);

    ll ans = 0;
    bool isOk;

    do {
        isOk = true;
        for(int i = 0; i < 8; ++i)
            isOk &= chessboard[i][columnPositions[i]] == '.';

        memset(diagonalCheck, 0, 15);
        for(int i = 0; i < 8; ++i) {
            isOk &= !(diagonalCheck[i + columnPositions[i]]);
            diagonalCheck[i + columnPositions[i]] = true;
        }

        memset(diagonalCheck, 0, 15);
        for(int i = 0; i < 8; ++i) {
            isOk &= !(diagonalCheck[i + 7 - columnPositions[i]]);
            diagonalCheck[i + 7 - columnPositions[i]] = true;
        }

        ans += isOk;
    } while (next_permutation(columnPositions, columnPositions + 8));

    cout << ans;
}

