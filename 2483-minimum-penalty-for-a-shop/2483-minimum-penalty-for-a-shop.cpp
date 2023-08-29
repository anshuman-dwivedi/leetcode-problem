class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
      vector<int>s;
        vector<int>pre;
        s.push_back(0);
        pre.push_back(0);
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(customers[i]=='N')
              count++;
              pre.push_back(count);  
                
}
        count=0;
         for(int i=n-1;i>=0;i-- )
        {
            if(customers[i]=='Y')
              count++;
              s.push_back(count);  
                
}
        reverse(s.begin(),s.end());
        int ans=INT_MAX;
        int ind=0;
        for(int i=0;i<n+1;i++)
        {
         int sum= s[i]+pre[i];
            if(ans>sum)
            {
               ans=sum;
                ind=i;
}
}
        return ind;
    }
};