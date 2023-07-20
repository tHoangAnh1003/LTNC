#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin >> n;
    vector<int> a(n), b(n + 1);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int j = 0; j < n + 1; ++j) cin >> b[j];
    sort(begin(a), end(a));
    sort(begin(b), end(b));
    int res = 0;
    for (int i = 0; i <= n; ++i) {
        if (a[i] != b[i]) {
            res = b[i];
            break;
        }
    }
    cout << res;
    return 0;
}