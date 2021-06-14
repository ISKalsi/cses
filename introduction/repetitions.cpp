#include<iostream>
#include<string>
#define ll long long

using namespace std;

int main() {
    string dna;
    cin >> dna;

    ll max = 0, temp = 1;
    char current = dna[0];
    for(ll i = 1; i < dna.size(); ++i) {
        if(dna[i] != current) {
            if(temp > max)
                max = temp;
            current = dna[i];
            temp = 1;
        } else {
            ++temp;
        }
    }

    if(max == 0 || temp > max) {
        cout << temp;
    } else {
        cout << max;
    }
}
