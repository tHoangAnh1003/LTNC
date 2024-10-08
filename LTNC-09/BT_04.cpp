#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

string ans(int n) {
    if (n % 2 != 0) return "Weird";
    else if (n % 2 == 0 && (n >= 2 && n <= 5)) return "Not Weird";
    else if (n % 2 == 0 && (n >= 6 && n <= 20)) return "Weird";
    else if (n % 2 == 0 && n > 20) return "Not Weird";
    return "";
}

int main()
{
    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));


    cout << ans(N);
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}