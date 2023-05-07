//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string str){
       if(str.empty()){
            return str;
        }
        string res="";
        int i=0;
        int j=str.size();
        while(i<j){
            if(i==0||str[i]<str[i-1]){
               res+=str[i];
            }
            else if(str[i]==str[i-1]&&i>1){
                res+=str[i];
            }
            else{
                break;
            }
            i++;
        }
        string temp=res;
        reverse(res.begin(),res.end());
        return temp+res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends