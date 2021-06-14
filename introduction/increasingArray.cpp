#include<iostream>
#define ll long long

using namespace std;

int main() {
    int n; cin >> n;
    ll* arr = new ll[n];

    ll moves = 0;
    cin >> arr[0];
    for(int i = 1; i < n; ++i) {
        cin >> arr[i];
        ll temp = arr[i] - arr[i-1];
        if (temp < 0) {
            arr[i] = arr[i-1];
            moves -= temp;
        }
    }

    cout << moves;
}
