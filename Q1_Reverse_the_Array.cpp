// https://practice.geeksforgeeks.org/problems/reverse-a-string/1

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str);

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        cout << reverseWord(s) << endl;
    }
    return 0;
}

// } Driver Code Ends

// User function Template for C++

string reverseWord(string str)
{
    int len = str.length();
    int i = 0;
    while (i < len)
    {
        char temp = str[i];
        str[i] = str[len - 1];
        str[len - 1] = temp;
        len--;
        i++;
    }
    return str;

    // Your code here
}
