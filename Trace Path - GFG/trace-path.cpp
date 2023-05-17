//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int isPossible(int n, int m, string s){
      int dx=0,dy=0;
      int maxix=0,miniy=0,maxiy=0,minix=0;
      for(auto ch:s)
      {
          if(ch=='L')
          dy--;
          else if(ch=='R')
          dy++;
          else if(ch=='U')
          dx++;
          else
          dx--;
          maxix=max(maxix,dx);
          maxiy=max(maxiy,dy);
          minix=min(minix,dx);
          miniy=min(miniy,dy);
       
      }
         if(abs(maxix-minix)>=n || (maxiy-miniy)>=m)
          return 0;
      return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.isPossible(n, m, s)<<endl;
    }
    return 0;
}
// } Driver Code Ends