#include<iostream>

using namespace std;

int main() {
    int n, x;
    int missingNum;

    cin >> n >> missingNum;
    missingNum ^= 1;

    for (int i = 2; i < n; ++i) {
        cin >> x;
        missingNum ^= x;
        missingNum ^= i;
    } 

    missingNum ^= n;
    cout << missingNum;
}
