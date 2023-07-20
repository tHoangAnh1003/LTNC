#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> se;
    int n; cin >> n;
    while (n --) {
        int tt; cin >> tt;
        if (tt == 1) {
            int a; cin >> a;
            se.insert(a);
        }
        else if (tt == 2) {
            int b; cin >> b;
            auto it = se.count(b);
            if (it) {
                se.erase(b);
            }
        }
        else {
            int c; cin >> c;
            if (se.count(c)) cout << "Yes\n";
            else cout << "No\n";
        }
    }  
    return 0;
}