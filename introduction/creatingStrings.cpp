#include<bits/stdc++.h>

using namespace std;

class CreatingStrings {
    string s;
    const size_t size;
    set<string> stringPermutations;

    public:

    CreatingStrings(string s) : size(s.size()) {
        this -> s = s;
    }

    void permutate(size_t index = 0) {
        if (index + 1 >= size) {
            stringPermutations.insert(s);
            return;
        }

        for(size_t i = index; i < size; i++) {
            swap(s[index], s[i]);
            permutate(index + 1);
            swap(s[index], s[i]);
        }
    }

    void printAns() {
        cout << stringPermutations.size() << "\n";
        for(auto &perm: stringPermutations) {
            cout << perm << "\n";
        }
    }
};


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s; cin >> s;
    string sInAlphabeticalOrder = s;
    sort(sInAlphabeticalOrder.begin(), sInAlphabeticalOrder.end());

    CreatingStrings obj = CreatingStrings(sInAlphabeticalOrder);
    obj.permutate();
    obj.printAns();
}
