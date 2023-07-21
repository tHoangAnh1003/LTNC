#include <bits/stdc++.h>
using namespace std;

#define MAX 1e9
#define MIN -1e9
#define MOD int(1e9 + 7)
typedef long long ll;

char s[] = {'a', 'b', 'c', 'd'};
string ans = "";
vector<string> myString;

void word(int i) {
	for (int j = 0; j < 4; ++j) {
		ans += s[j];
		if (ans.length() == 3) {
			myString.push_back(ans);
		}
		else {
			word(i + 1);
		}
		ans.pop_back();
	}
}

signed main() {
    word(1);
    for (string x : myString) {
    	cout << x << endl;
	}
    return 0;
}
