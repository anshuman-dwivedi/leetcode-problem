//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
         vector<int>res;
        for(int i=0;i<str.size();i++){
            if(str[i]=='I')res.push_back(1);
            if(str[i]=='V')res.push_back(5);
            if(str[i]=='X')res.push_back(10);
            if(str[i]=='L')res.push_back(50);
            if(str[i]=='C')res.push_back(100);
            if(str[i]=='D')res.push_back(500);
            if(str[i]=='M')res.push_back(1000);
        }
        reverse(res.begin(),res.end());
        int ans=0;
        int prev=0;
        for(int i=0;i<str.size();i++){
             int value=res[i];
             if(prev>value) ans-=value;
             else ans+=value;
              prev=value;
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
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends