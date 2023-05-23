// https://practice.geeksforgeeks.org/problems/repeated-character2058/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    char firstRep(string s)
    {
        // code here.
        // string ch[26];
        // ch[0] = 'a';
        // for (int i = 0; i < 26; i++)
        // {
        //     ch[i] = int(i) + 97;
        // }
        // for (int i = 0; i < 26; i++)
        // {
        //     cout << ch[i] << " ";
        // }
        // for (int i = 0; i < s.length(); i++)
        // {
        //     ch[int(s[i])];
        //     if ()
        //     {
        //         /* code */
        //     }
        // }
        for (int i = 0; i < s.length(); i++)
            for (int j = 0; j < s.length(); j++)
                if (s[i] == s[j] && i != j)
                    return s[i];
        return '#';
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        char res = ob.firstRep(s);
        if (res == '#')
            cout << -1 << endl;
        else
            cout << res << endl;
    }
    // cout << "sdffdsf" << endl;
    return 0;
}

// } Driver Code Ends