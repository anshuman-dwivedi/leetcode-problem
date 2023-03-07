class Solution {
public:
    bool check(vector<int>& time,long long mid,int tt)
    {
        long long total=0; 
    for(long long i=0;i<time.size();i++)
    {
        total=total+(long long)mid/time[i];
    if(total>=tt)
            return true;
}
        return false;
}
    long long minimumTime(vector<int>& time, int tt) {
     sort(time.begin(),time.end());   
      long long low=(long long)time[0];
         long long mid;
        long long high=(long long)time[time.size()-1]*(long long)tt;
        while(low<high)
        {
            mid=low+(high-low)/2;
            if(check(time,mid,(long long)tt))
                high=mid;
            else
                low=mid+1;
}
        return low;
    }
};