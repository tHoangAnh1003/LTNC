#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int n = s.length();
    string time = s.substr(8);
    if (time == "PM") {
        int hour = stoi(s.substr(0, 2));
        hour += 12;
        string hour_tmp = "";
        if (hour == 24) {
            hour_tmp = "12";
        }
        else {
            hour_tmp = to_string(hour);
        }
        for (int i = 0; i < 2; ++i) {
            s[i] = hour_tmp[i];
        }
    }
    else {
        string tmp = s.substr(0, 2);
        if (tmp == "12") {
            for (int i = 0; i < 2; ++i) {
                s[i] = '0';
            }
        }
    }
    string t = "";
    for (int i = 0; i < n - 2; ++i) {
        t += s[i];
    }
    s = t;
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
