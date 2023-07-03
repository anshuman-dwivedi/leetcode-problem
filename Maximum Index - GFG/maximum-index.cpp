//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
     stack<int>st;
     for(int i=0;i<n;i++)
     {
         if(st.empty() || arr[st.top()]>arr[i])
         {
             st.push(i);
         }
     }
     int i=n-1;
     int ans=INT_MIN;
     while(i>=0)
     {
         if(!st.empty() && arr[st.top()]<=arr[i])
         {
             ans=max(ans,i-st.top());
             st.pop();
         }
         else
         i--;
     }
     return ans;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends