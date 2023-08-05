//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
   
   vector<string>ans;
  void helper(int ind,string s){
      
        if(ind==s.length()-1)
        {
            ans.push_back(s);
            return;
        }
        for(int i=ind;i<s.length();i++)
        {
            swap(s[i],s[ind]);
          helper(ind+1,s);
            swap(s[i],s[ind]);
        }
    }
    vector<string> permutation(string s)
    {
       helper(0,s);
       sort(ans.begin(),ans.end());
       return  ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends