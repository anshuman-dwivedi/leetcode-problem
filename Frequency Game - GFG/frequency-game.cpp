//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
map<int,int>mp;
int ans=0;
int mini=INT_MAX,maxi=0;
for(int i=0;i<n;i++)
{
    mp[arr[i]]++;
}
for(auto it:mp)
{
    if(it.second<=mini && it.first>maxi)
    {
        mini=it.second;
        maxi=it.first;
        ans=it.first;
    }
    
}
return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends