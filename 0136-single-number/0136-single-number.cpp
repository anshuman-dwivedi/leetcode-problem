class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int xore=nums[0];
        for(int i=01;i<nums.size();i++)
            xore^=nums[i];
        return xore;
    }
};