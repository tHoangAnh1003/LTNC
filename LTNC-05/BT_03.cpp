#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        v.push_back(x);
    }
    int m; cin >> m;
    v.erase(v.begin() + m - 1);
    int a, b; cin >> a >> b;
    v.erase(begin(v) + a - 1, begin(v) + b - 1);
    cout << v.size() << endl;
    for (int x : v) 
        cout << x << ' ';
    return 0;
}