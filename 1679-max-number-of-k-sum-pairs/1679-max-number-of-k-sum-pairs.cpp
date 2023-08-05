class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
      unordered_map<int,int>mp;
        for(auto it:nums)
            mp[it]++;
        int count=0;
        for(auto it:mp)
        {
            if(k-it.first==it.first){
            count+=it.second/2;
               mp[it.first]=0;
            }
            if(mp.find(k-it.first)!=mp.end())
            {
                int mini=min(mp[k-it.first],mp[it.first]);
                 count+=mini;
               mp[it.first]-=mini;
                mp[k-it.first]-=mini;
               
}
}
        return count;
    }
};