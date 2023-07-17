//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
           vector<long long> nexts(vector<long long> ns,long long h[],int n)
    {
        stack<long long>s;
            s.push(n-1);
            ns[n-1]=n;
       for(int i=n-2;i>=0;i--)
       {
           while(!s.empty() && h[s.top()]>=h[i])
               s.pop();
           if(s.empty())
               ns[i]=n;
           else
               ns[i]=s.top();
           s.push(i);
}
 return ns;       
}
    vector<long long> prevs(vector<long long> ps,long long h[],int n)
    {
        stack<long long >s;
        s.push(0);
      //  ps[n-1]=n+1;
       for(int i=1;i<n;i++)
       {
           while(!s.empty() && h[s.top()]>=h[i])
               s.pop();
           if(s.empty())
               ps[i]=-1;
           else
               ps[i]=s.top();
           s.push(i);
}
 return ps;       
}
    long long getMaxArea(long long h[], int n)
    {
        vector<long long >ps(n,-1);
        vector<long long >ns(n,-1);
        ps=prevs(ps,h,n);
        ns=nexts(ns,h,n);
        long long  maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            long long  curr=(ns[i]-ps[i]-1)*h[i];
            maxi=max(maxi,curr);
}
        return maxi;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends