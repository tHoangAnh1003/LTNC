#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    int q; cin >> q;
    for (int i = 1; i <= q; ++i) {
        int x; cin >> x;
        auto it = lower_bound(begin(v), end(v), x);
        cout << ((*it == x) ? "Yes " : "No ");
        cout << (it - begin(v)) + 1 << endl;
    }
    return 0;
}