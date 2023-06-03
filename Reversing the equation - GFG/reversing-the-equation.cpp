//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
       string wd,res;
       for(int i=s.length()-1;i>=0;i--)
       {
           if(s[i]>='0' && s[i]<='9')
           {
            wd+=s[i];   
           }
           else
          {
              reverse(wd.begin(),wd.end());
              res+=wd;
              res+=s[i];
              wd="";
          }}
           reverse(wd.begin(),wd.end());
          res+=wd;
          return res;
        }
};


//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends