#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    map<string, string> Map;
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        string name; cin >> name;
        string phone; cin >> phone;
        Map[name] = phone;
    } 
    
    string s;
    while (cin >> s) {
        if (Map.count(s)) {
            cout << s << "=" << Map[s] << endl;
        }
        else cout << "Not found\n";
    }
    
    return 0;
}