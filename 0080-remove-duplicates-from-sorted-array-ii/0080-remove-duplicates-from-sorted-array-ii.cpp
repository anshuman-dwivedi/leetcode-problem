class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ind=0;
       for(int i=0;i<nums.size();i++)
       {
           if(ind<2 or nums[ind-2]<nums[i])
               nums[ind++]=nums[i];
}
        return ind;
    }
};