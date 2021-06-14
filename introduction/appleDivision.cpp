#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n; cin >> n;
    ll sum = 0, apples[20];

    for(int i = 0; i < n; ++i) {
        cin >> apples[i];
        sum += apples[i];
    }

    ll cardinality = 1 << n;
    ll halfSum = sum / 2;
    ll smallWeightGroupSum = 0;
    for(int subset = 0; subset < cardinality; ++subset) {
        ll subsetSum = 0;
        for(int place = 0; place < n; ++place)
            if(subset >> place & 1)
                subsetSum += apples[place];

        if(subsetSum <= halfSum && subsetSum > smallWeightGroupSum)
            smallWeightGroupSum = subsetSum;
    }

    ll largeWeightGroupSum = sum - smallWeightGroupSum;
    cout << largeWeightGroupSum - smallWeightGroupSum;

}
