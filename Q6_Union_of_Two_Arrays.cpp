// https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
// #include <iostream>
// #include <limits>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution
{
public:
	// Function to return the count of number of elements in union of two arrays.
	int doUnion(int a[], int n, int b[], int m)
	{
		// code here
		// int min1 = numeric_limits<int>::max();
		// int max1 = numeric_limits<int>::min();
		// int min2 = numeric_limits<int>::max();
		// int max2 = numeric_limits<int>::min();

		// for (int i = 0; i < n; i++)
		// 	max1 = max(max1, a[i]);

		// for (int i = 0; i < m; i++)
		// 	max2 = max(max2, b[i]);

		// int ans = max(max1, max2), count = 1;

		// int newtable[ans + 1];
		// for (int i = 0; i < ans + 1; i++)
		// 	newtable[i] = 0;

		// // newtable[a[0]]++;

		// for (int i = 1; i < n; i++)
		// 	if (a[i] != a[i - 1])
		// 	{
		// 		count++;
		// 		++newtable[a[i]];
		// 	}

		// for (int j = 0; j < m; j++)
		// 	if (newtable[b[j]] == 0){
		// 		count++;
		// 		++newtable[b[j]];

		// 	}
		int count = 0;
		map<int, int> freq;
		for (int i = 0; i < n; i++)
			freq[a[i]]++;
		for (int i = 0; i < m; i++)
			freq[b[i]]++;
		for (auto &it : freq)
			count++;

		return count;
	}
};

//{ Driver Code Starts.

int main()
{

	int t;
	cin >> t;

	while (t--)
	{

		int n, m;
		cin >> n >> m;
		int a[n], b[m];

		for (int i = 0; i < n; i++)
			cin >> a[i];

		for (int i = 0; i < m; i++)
			cin >> b[i];
		Solution ob;
		cout << ob.doUnion(a, n, b, m) << endl;
	}

	return 0;
}
// } Driver Code Ends