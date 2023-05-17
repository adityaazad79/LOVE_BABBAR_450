// https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void segregateElements(int arr[], int n)
    {
        int *pos, *neg, p = 0, ne = 0;
        pos = (int *)malloc(sizeof(int) * n);
        neg = (int *)malloc(sizeof(int) * n);

        for (int i = 0; i < n; i++)
            if (arr[i] >= 0)
                pos[p++] = arr[i];
            else
                neg[ne++] = arr[i];

        for (int i = 0; i < p; i++)
            arr[i] = pos[i];
        for (int i = 0; i < ne; i++)
            arr[i + p] = neg[i];
        free(pos);
        free(neg);
    }
};

//{ Driver Code Starts.
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        ob.segregateElements(a, n);

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}

// } Driver Code Ends