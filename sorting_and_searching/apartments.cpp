#include<bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long apartments, applicants, maxDifference, apartmentsAlloted = 0;
    cin >> applicants >> apartments >> maxDifference;

    vector<long> desiredSizes, apartmentSizes;

    for(long i = 0; i < applicants; ++i) {
        long desiredSize; cin >> desiredSize;
        desiredSizes.push_back(desiredSize);
    }

    for(long i = 0; i < apartments; ++i) {
        long apartmentSize; cin >> apartmentSize;
        apartmentSizes.push_back(apartmentSize);
    }

    sort(desiredSizes.begin(), desiredSizes.end());
    sort(apartmentSizes.begin(), apartmentSizes.end());

    for(long i = 0, j = 0; i < apartments && j < applicants; ++i) {
        while (desiredSizes[j] <= apartmentSizes[i] + maxDifference && j < applicants) {
            if (abs(desiredSizes[j] - apartmentSizes[i]) <= maxDifference) {
                ++apartmentsAlloted;
                ++j;
                break;
            }

            ++j;
        }
    }

    cout << apartmentsAlloted;
}

