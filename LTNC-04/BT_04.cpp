#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, t; cin >> n >> t;
    vector<vector<int>> v;
    for (int i = 0; i < n; ++i) {
        int m; cin >> m;
        vector<int> tmp;
        for (int i = 0; i < m; ++i) {
            int x; cin >> x;
            tmp.push_back(x);
        }
        v.push_back(tmp);
    } 
    while (t--) {
        int i, j; cin >> i >> j;
        cout << v[i][j] << endl;
    }
    return 0;
}