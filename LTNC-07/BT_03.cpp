#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'powerSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER X
 *  2. INTEGER N
 */
 
int sum = 0, cnt = 0;
int a[10000];
bool used[1000];

void Try(int i, int x, int n, int pos) {
    for (int j = pos; j <= pow(x, 1.0/n); ++j) {
        if (!used[j]) {
            used[j] = true;
            a[i] = j;
            sum += pow(j, n);
            if (sum == x) {
                cnt += 1;
            }
            else if (sum < x) Try(i + 1, x, n, j + 1);
            sum -= pow(j, n);
            used[j] = false;
        }
    }
}

int powerSum(int X, int N) {
    Try(1, X, N, 1);
    return cnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string X_temp;
    getline(cin, X_temp);

    int X = stoi(ltrim(rtrim(X_temp)));

    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));

    int result = powerSum(X, N);

    fout << result << "\n";

    fout.close();

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