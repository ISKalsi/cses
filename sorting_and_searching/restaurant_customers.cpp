#include<bits/stdc++.h>
#define ARRIVAL_OR_LEAVE 1
#define ARRIVE 1
#define LEAVE -1

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    set<array<int, 2>> customerTimings;
    int n; cin >> n;

    while(n--) {
        int arrival, leave;
        cin >> arrival >> leave;
        customerTimings.insert({arrival, ARRIVE});
        customerTimings.insert({leave, LEAVE});
    }

    int maxNumber = 0, currentNumber = 0;
    for(auto timing: customerTimings) {
        currentNumber += timing[ARRIVAL_OR_LEAVE];
        maxNumber = max(currentNumber, maxNumber);
    }

    cout << maxNumber;
}
