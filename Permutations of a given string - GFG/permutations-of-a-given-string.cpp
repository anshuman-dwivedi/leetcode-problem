//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	set<string>st;
	void helper(string s,int ind)
	{
	    if(ind>=s.size())
	    {
	        st.insert(s);
	        return;
	    }
	    for(int i=ind;i<s.size();i++)
	    {
	        if(i!=ind && s[i]==s[i-1])
	        continue;
	        swap(s[ind],s[i]);
	        helper(s,ind+1);
	        swap(s[ind],s[i]);
	    }
	}
		vector<string>find_permutation(string s)
		{
		vector<string>res;
		helper(s,0);
		 for(auto it:st)
		 {
		     res.push_back(it);
		 }
		return res;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends