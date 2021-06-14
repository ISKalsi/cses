#include<bits/stdc++.h>

using namespace std;

static const string NO_SOLUTION = "NO SOLUTION";

void printList(long* array) {
    for(int i = 0; i < 26; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s; cin >> s;
    long len = s.size();
    bool isOdd = len % 2 != 0;

    long freq[26] = {};
    for(char &ch: s) {
        int letterIndex = int(ch)-65;
        ++freq[letterIndex];
    }

    bool oddArrived = !isOdd;
    int oddCountIndex = -1;
    for(int i = 0; i < 26; ++i) {
        if (freq[i] % 2 != 0) {
            if(oddArrived) {
                cout << NO_SOLUTION;
                return 0;
            } else {
                oddCountIndex = i;
                oddArrived = true;
            }
        }
    }

    string palindrome = "";
    for(int i = 0; i < 26; ++i) {
        char ch = i+65;

        if (isOdd && i == oddCountIndex) {
            auto mid = palindrome.begin() + palindrome.size() / 2;
            palindrome.insert(mid, ch);
        }

        palindrome.insert(palindrome.end(), freq[i] / 2, ch);
        palindrome.insert(palindrome.begin(), freq[i] / 2, ch);
    }

    cout << palindrome;
}
