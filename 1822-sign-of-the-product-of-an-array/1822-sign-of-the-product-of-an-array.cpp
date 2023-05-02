class Solution {
public:
    int arraySign(vector<int>& nums) {
     int n=nums.size();
        int count0=0;
        int count=0,count1=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                count0++;
            else if(nums[i]>0)
                count1++;
            else
                count++;
}
        if(count0>=1)
            return 0;
        return (count%2)?-1:1;
    }
};