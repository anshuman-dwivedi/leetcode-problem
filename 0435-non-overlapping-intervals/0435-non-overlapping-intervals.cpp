class Solution {
public:
    static bool cmp(vector<int>& a,vector<int>& b)
    {
        return a[1]<b[1];
}
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
       sort(intervals.begin(),intervals.end(),cmp);
      /*  for(int i=0;i<intervals.size();i++)
        {
            cout<<intervals[i][0]<<"\t"<<intervals[i][1]<<endl;
}*/
       int prev=0;
        int ans=0;
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[prev][1]>intervals[i][0])
            {
                ans++;
                if(intervals[i][1] <intervals[prev][1])
                    prev=i;
}
            else
                prev=i;
}
        return ans;
    }
};