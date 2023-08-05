#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int n; cin >> n;
    float f; cin >> f;
    cin.ignore();
    string t; getline(cin, t);
    
    
    cout << i + n << endl;

    cout << fixed << setprecision(1) << d + f << endl;

    cout << s + t;
    return 0;
}