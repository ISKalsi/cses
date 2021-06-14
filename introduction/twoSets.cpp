#include<iostream>
#include<vector>

#define ll long long

using namespace std;

int main() {
    bool possible = false;
    vector<int> setA, setB;
    ll sumA, sumB;
    sumA = sumB = 0;

    int n; cin >> n;

    ll sum = n * (n+1) / 2;
    if(sum % 2 == 0 && n > 2) {
        possible = true;
        bool flag = true;

        if(n % 2 != 0) {
            setA.push_back(1);
            setA.push_back(2);
            setB.push_back(3);

            int limit = (n-3)/2 + 3;
            for(int i = 4, j = n; i <= limit; --j, ++i) {
                if(flag) {
                    setA.push_back(i);
                    setA.push_back(j);
                } else {
                    setB.push_back(i);
                    setB.push_back(j);
                }
                flag = !flag;
            }
        } else {
            for(int i = 1, j = n; i <= n/2; ++i, --j) {
                if(flag) {
                    setA.push_back(i);
                    setA.push_back(j);
                } else {
                    setB.push_back(i);
                    setB.push_back(j);
                }
                flag = !flag;
            }
        }
    }

    if (possible) {
        cout << "YES" <<endl;

        cout << setA.size() <<endl;
        for(auto &num: setA) {
            cout << num <<" ";
        }

        cout << endl << setB.size() << endl;
        for(auto &num: setB) {
            cout << num <<" ";
        }
    } else {
        cout << "NO";
    }
}
