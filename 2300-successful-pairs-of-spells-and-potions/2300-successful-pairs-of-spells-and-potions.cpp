class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long success) {
      vector<int>v(s.size(),0);
        sort(p.begin(),p.end());
        for(int i=0;i<s.size();i++)
        {
            int l=0;
            int high=p.size()-1;
             int mid;
            while(l<=high)
            {
               mid=l+(high-l)/2;
                if((long long int)s[i]*(long long int)p[mid]>=success)
                    high=mid-1;
                else
                    l=mid+1;
}
            v[i]=p.size()-1-high;
}
        return v;
    }
};