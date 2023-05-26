// https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n, int x)
{
    // code here
    // int first_index_flag = -1;
    // int last_index = -1;
    // vector<int> oc;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == x)
    //     {
    //         if (first_index_flag == -1)
    //         {
    //             oc.push_back(i);
    //             first_index_flag += 1;
    //         }
    //         last_index = i;
    //     }
    // }
    // oc.push_back(last_index);
    // return oc;

    // The above code has time complexity of O(n)


    // The below code has time complexity of log(n)
    vector<int> oc;
    // First Occurence
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            result = mid;
            high = mid - 1;
        }
        else if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    oc.push_back(result);

    // Last Occurence
    low = 0, high = n - 1;
    result = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            result = mid;
            low = mid + 1;
        }
        else if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    oc.push_back(result);

    return oc;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n], i;
        for (i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> ans;
        ans = find(arr, n, x);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}

// } Driver Code Ends