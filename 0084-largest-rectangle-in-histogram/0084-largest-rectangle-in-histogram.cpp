class Solution {
public:
        vector<int> nexts(vector<int> ns,vector<int>h,int n)
    {
        stack<int>s;
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
    vector<int> prevs(vector<int> ps,vector<int>h,int n)
    {
        stack<int>s;
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
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        vector<int>ps(n,-1);
        vector<int>ns(n,-1);
        ps=prevs(ps,h,n);
        ns=nexts(ns,h,n);
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int curr=(ns[i]-ps[i]-1)*h[i];
            maxi=max(maxi,curr);
}
        return maxi;
    }
};