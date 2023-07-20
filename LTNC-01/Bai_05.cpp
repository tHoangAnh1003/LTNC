#include <bits/stdc++.h>
using namespace std;

#define MAX 1e9
#define MIN -1e9
#define MOD int(1e9 + 7)
typedef long long ll;

struct Max{
    int a[4];
    
    void Input(){
        for(int i = 0; i < 4; i ++){
            cin >> a[i];
        }
        sort(a, a + 4);
        
        cout << a[3];
    }
    
};

signed main() {
    Max M;
    
    M.Input();
    
    return 0;
}
