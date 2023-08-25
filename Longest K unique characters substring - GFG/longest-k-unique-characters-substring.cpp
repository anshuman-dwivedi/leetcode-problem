//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
   unordered_map<char,int>mp;
   int i=0,j=0,ans=-1;
   int n=s.length();
   while(i<n)
   {
       mp[s[i]]++;
       if(mp.size()==k)
       {
           int len=i-j+1;
           ans=max(ans,len);
       }
       else if(mp.size()>k){
      while(mp.size()>k)
       {
           mp[s[j]]--;
           if(mp[s[j]]==0)
           mp.erase(s[j]);
           j++;
       }
       }
           i++;
   }
   return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends