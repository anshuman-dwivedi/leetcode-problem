//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
   long long int helper(string s,int k){
        int i = 0;
        int j = 0 ;
        int n = s.length() ; 
        vector<int>freq(26,0); 
        int count = 0 ;
        long ans = 0 ;
        while(j<n){
           freq[s[j]-'a']++;
            if(freq[s[j]-'a']==1){
               count++;
            }
            while(count>k){
               freq[s[i]-'a']--;
                if(freq[s[i]-'a']==0){
                   count--;
                }
                i++;
            }
            j++;
            ans+=(j-i+1) ; 
        }
        return ans ;
   }
    long long int substrCount (string s, int k) {
    return helper(s,k)-helper(s,k-1) ;
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends