//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> findTwoElement(vector<int> arr, int n)
    {
        // code here
        vector<int> out;
        int flag[n + 1];
        for (int i = 0; i <= n; i++)
            flag[i] = 0;

        flag[arr[0]] = 1;
        for (int i = 1; i < n; i++)
            if (!flag[arr[i]])
                flag[arr[i]] = 1;
            else
                out.push_back(arr[i]);

        for (int i = 1; i <= n; i++)
            if (!flag[i])
                out.push_back(i);
        return out;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends