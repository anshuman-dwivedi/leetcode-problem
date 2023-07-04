class Solution {
public:
    int singleNumber(vector<int>& nums) {
      unordered_map<int,int>mp;
       for(auto it:nums)
       {
           mp[it]++;
}
        for(auto itr:mp)
        {
            if(itr.second==1)
                return itr.first;
}
        return -1;
    }
};