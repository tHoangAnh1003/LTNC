#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin >> n;
    while (n--) {
        string s; cin >> s;
        int i = 0, j = 1;
        string s1 = "", s2 = "";
        while (i < s.length()) {
            s1 += s[i];
            i += 2;
        }
        while (j < s.length()) {
            s2 += s[j];
            j += 2;
        }
        cout << s1 << " " << s2 << endl;
    }
    return 0;
}