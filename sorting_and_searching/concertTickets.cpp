#include<bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;

    int customerMaxPrice[m];
    set<array<int, 2>> ticketPrice;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        ticketPrice.insert({x, i});
    }

    for(int i = 0; i < m; ++i) {
        cin >> customerMaxPrice[i];
    }

    for_each(customerMaxPrice, customerMaxPrice + m, [&](int x) {
                auto it = ticketPrice.lower_bound({x+1, 0});
                if(it == ticketPrice.begin()) {
                    cout << "-1\n";
                } else {
                    --it;
                    cout << (*it)[0] << endl;
                    ticketPrice.erase(it);
                }
            });
}
