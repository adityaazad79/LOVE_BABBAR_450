// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/0
// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int c_0=0, c_1=0,c_2=0, i;
        for(i=0;i<n;i++){
            if(a[i]==0)
                c_0++;
            else if(a[i]==1)
                c_1++;
            else
                c_2++;
            
        }
        
        i = 0;

        while(c_0--)
            a[i++]=0;
        
        while(c_1--)
            a[i++]=1;

        while(c_2--)
            a[i++]=2;
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends