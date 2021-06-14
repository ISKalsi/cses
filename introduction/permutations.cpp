#include<iostream>
#define ll long long 

using namespace std;

int main () {
    /* 4 2 5 3 1
     * 5 2 4 6 3 1
     * 6 2 4 7 5 3 1
     * 7 2 4 6 8 5 3 1
     * 8 2 4 6 9 7 5 3 1
     */

    int n; cin >> n;
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    } else if (n == 1) {
        cout << 1;
        return 0;
    } else if (n == 4) {
        cout << "2 4 1 3";
        return 0;
    }

    bool flag = false;
    ll *perm = new ll[n];

    int j = 2;
    for(int i = 1; i < n/2; ++i, j += 2) {
        perm[i] = j;
    }

    perm[0] = n-1;
    perm[n/2] = n;


    if(n % 2 == 0) {
        j -= 3;
    } else {
        j -= 1;
    }

    for(int i = n/2 + 1; i < n; ++i, j -= 2) {
        perm[i] = j;
    }

    for(int i = 0; i < n; ++i) {
        cout << perm[i] << " ";
    }
}
