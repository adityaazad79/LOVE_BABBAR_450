#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

bool valid_shuffle(string s1, string s2, string f)
{
    if (s1.length() + s2.length() != f.length())
        return false;
    string join = s1 + s2;
    cout << join << endl;
    sort(join.begin(), join.end());
    sort(f.begin(), f.end());
    cout << join << endl;
    cout << f << endl;
    if (join != f)
        return false;

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2, f;
    cin >> s1 >> s2 >> f;
    if (valid_shuffle(s1, s2, f))
        cout << "Valid Shuffle";
    else
        cout << "Invalid Shuffle";

    return 0;
}