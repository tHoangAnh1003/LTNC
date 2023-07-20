#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n; cin >> n;
    map<string, int> Map;
    for (int i = 0; i < n; ++i) {
        int t; cin >> t;
        if (t == 1) {
            string s; cin >> s;
            int m; cin >> m;
            Map[s] += m;
        }
        else if (t == 2) {
            string s; cin >> s;
            Map.erase(s);
        }
        else {
            string s; cin >> s;
            cout << Map[s] << endl;
        }
    } 
    return 0;
}