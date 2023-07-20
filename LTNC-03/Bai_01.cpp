#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
	string a, b; cin >> a >> b;
	
	cout << a.length() << ' ' << b.length() << endl;
	cout << a + b << endl;
	
	string res = "", ans = "";
	res += b[0];
	for (int i = 1; i < a.length(); ++i) {
	  res += a[i];
	}
	cout << res << ' ';
	
	ans += a[0];
	for (int i = 1; i < b.length(); ++i) {
	  ans += b[i];
	}
	cout << ans << endl;
	
	return 0;
}
