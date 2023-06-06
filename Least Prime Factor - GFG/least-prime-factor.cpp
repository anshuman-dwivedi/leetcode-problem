//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
      vector<int>si(n+1,0);
      for(int i=1;i<=n;i++)
      {
          si[i]=i;
      }
      for(int i=2;i*i<=n;i++)
      {
          if(si[i]==i)
          {
          for(int j=i*2;j<=n;j+=i)
          {
           if(si[j]==j)
           si[j]=i;
          }
      }}
      return si;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends