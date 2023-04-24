//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
    stack<int>st;
    int n=arr.size();
    vector<int>ans(n,-1);
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && arr[st.top()]>=arr[i])
        st.pop();
        ans[i]=(st.size())?st.top():-1;
        st.push(i);
    }
    while(!st.empty())
    st.pop();
    for(int i=0;i<n;i++)
    {
       while(!st.empty() && arr[st.top()]>=arr[i])
        st.pop(); 
        if(st.size())
        {
        if(ans[i]==-1)
        ans[i]=st.top();
        else{
            int idx=st.top();
            if((i-idx)<(ans[i]-i))
            ans[i]=idx;
            else if((i-idx)==(ans[i]-i)){
                if(arr[idx]<=arr[ans[i]])
                ans[i]=idx;
            }
        }
        }
        st.push(i);
    }
    return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends