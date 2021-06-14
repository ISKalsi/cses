#include<bits/stdc++.h>

using namespace std;

string decimalToBinary(long decimal, short N) {
    string binary = "";
    for(int i = N-1; i >= 0; --i) {
        long placeValue = pow(2, i);
        if(placeValue > decimal) {
            binary += "0";
        } else {
            binary += "1";
            decimal -= placeValue;
        }
    }

    return binary;
}

void generateGrayStrings(long N) {
    long numOfStrings = 1 << N;
    for(long i = 0; i < numOfStrings; ++i) {
        long grayDecimal = i ^ (i >> 1);
        cout << decimalToBinary(grayDecimal, N);
        cout << "\n";
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    short n; cin >> n;
    generateGrayStrings(n);
}
