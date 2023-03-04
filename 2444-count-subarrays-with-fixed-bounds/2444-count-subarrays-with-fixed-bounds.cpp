class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
     bool minf=false;
        bool maxf=false;
        long long  start=0,mins=0,maxs=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            int val=nums[i];
            if(val<minK || val>maxK)
            {
                maxf=false;
                minf=false;
                start=i+1;
}
            if(val==minK)
            {
            minf=true;
                mins=i;
}
            if(val==maxK)
            {
                maxf=true;
                maxs=i;
}
            if(minf && maxf)
            {
               count+=min(maxs,mins)-start+1;
}
}
        return count;
    }
};