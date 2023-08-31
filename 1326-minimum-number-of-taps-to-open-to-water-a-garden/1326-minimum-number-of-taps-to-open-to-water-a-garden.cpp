class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
      vector<int>temp(n+1,0);
        int tap=0;
        for(int i=0;i<ranges.size();i++)
        {
            int start=max(0,i-ranges[i]);
            int end=min(n,i+ranges[i]);
            temp[start]=max(temp[start],end);
}
        int maxi=0;
        int curr=0;
        int val=0;
        for(int i=0;i<=n;i++)
        {
            if(i>maxi)
                return -1;
            if(i>curr)
            {
                tap++;
                curr=maxi;
}
            maxi=max(maxi,temp[i]);
}
        return tap;
    }
};