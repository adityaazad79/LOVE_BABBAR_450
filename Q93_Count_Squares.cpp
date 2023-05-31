//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int countSquares(int N)
    {
        // code here
        if (N != 0 || N != 1 || N != 2)
        {
            float x = sqrt(N);
            if (int(x) == x)
                return (x - 1);
            return x;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;

        cin >> N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}
// } Driver Code Ends