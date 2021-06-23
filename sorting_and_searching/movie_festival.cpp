#include<bits/stdc++.h>
#define START 1
#define FINISH 0

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n; cin >> n;
    array<int, 2> movieTimings[n];

    for(int i = 0; i < n ; ++i) {
        cin >> movieTimings[i][START] >> movieTimings[i][FINISH];
    }

    sort(movieTimings, movieTimings + n);

    int moviesWatched = 0, lastMovieEndTime = 0;
    for(int i = 0; i < n; ++i) {
        if(movieTimings[i][START] >= lastMovieEndTime) {
            ++moviesWatched;
            lastMovieEndTime = movieTimings[i][FINISH];
        }
    }

    cout << moviesWatched;
}

