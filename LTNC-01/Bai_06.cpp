#include <bits/stdc++.h>
using namespace std;

#define MAX 1e9
#define MIN -1e9
#define MOD int(1e9 + 7)
typedef long long ll;

const int MAX_N = 1005;
int a[MAX_N];

signed main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++ i) {
        cin >> a[i];
    }
    
    for(int i = n - 1; i >= 0; i --){
        cout << a[i] << " ";
    }
       
    return 0;
}
