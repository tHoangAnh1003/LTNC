#include <bits/stdc++.h>
using namespace std;

#define MAX 1e9
#define MIN -1e9
#define MOD int(1e9 + 7)
typedef long long ll;

int binary_search(const vector<int>& v, int left, int right, int target) {
	if (left > right) return -1;
	int mid = (left + right) / 2;
	if (v[mid] == target) return mid;
	else if (v[mid] > target) return binary_search(v, left, mid - 1, target);
	return binary_search(v, mid + 1, right, target);
}

signed main() {
    int n, target; cin >> n >> target;
    vector<int> _vector(n);
    for (int i = 0; i < n; ++i) cin >> _vector[i];
    sort(begin(_vector), end(_vector));
    
    int search = binary_search(_vector, 0, n - 1, target);
    if (search == -1) cout << "NOT FOUND\n";
    else cout << search << endl;
    return 0;
}
