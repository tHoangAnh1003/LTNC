#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int max_consecutive_ones(int n) {
    string binaryString = "";
    while (n > 0) {
        binaryString = to_string(n % 2) + binaryString;
        n /= 2;
    }

    int maxConsecutiveOnes = 0;
    int consecutiveOnes = 0;
    for (char c : binaryString) {
        if (c == '1') {
            consecutiveOnes++;
            maxConsecutiveOnes = max(maxConsecutiveOnes, consecutiveOnes);
        } else {
            consecutiveOnes = 0;
        }
    }

    return maxConsecutiveOnes;
}


int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    
    cout << max_consecutive_ones(n);

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