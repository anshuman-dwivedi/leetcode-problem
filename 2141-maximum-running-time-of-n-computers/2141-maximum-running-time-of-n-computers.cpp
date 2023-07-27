class Solution {
public:
    bool helper(int n,long long mid,vector<int>b)
    {
        long long t_t=0;
        for(int i=0;i<b.size();i++)
        {
            if(b[i]>=mid)
            {
                t_t+=mid;
}
            else
                t_t+=b[i];
}
        return t_t>=mid*n;
}
    long long maxRunTime(int n, vector<int>& batteries) {
       long long  low=0,ans=0;
        long long high=1e14;
        while(low<=high)
        {
            long long mid=low+(high-low)/2;
            if(helper(n,mid,batteries))
            {
                ans=mid;
                low=mid+1;
}
            else
                high=mid-1;
}
        return ans;
    }
};