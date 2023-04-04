//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
  int ac=0;
  int bc=0;
 char prev='#';
 for(int i=0;i<str.length();i++)
 {
     if(str[i]==prev)
     continue;
     if(str[i]=='a')
     ac++;
     else
     bc++;
     prev=str[i];
 }
 
  return min(ac,bc)+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends