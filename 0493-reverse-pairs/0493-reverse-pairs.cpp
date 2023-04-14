class Solution {
public:
    int merge(int low,int mid,int high,vector<int>& nums)
    {
        int j=mid+1,count=0;
        for(int i=low;i<=mid;i++)
        {
            while(j<=high && nums[i]>2LL*nums[j])
                j++;
            count+=(j-(mid+1));
}
        vector<int> temp;
        int left=low,right=mid+1;
        while(left<=mid && right<=high)
        {
            if(nums[left]<=nums[right])
                temp.push_back(nums[left++]);
                else
                temp.push_back(nums[right++]);
        }
        while(left<=mid)
            temp.push_back(nums[left++]);
             while(right<=high)
            temp.push_back(nums[right++]);
            for(int i=low;i<=high;i++)
            {
                nums[i]=temp[i-low];
}
            return count;
        }
    int mergesort(int low,int high,vector<int>& nums)
    {
        if(low>=high)
            return 0;
        int mid=low+(high-low)/2;
        int ans=mergesort(low,mid,nums);
        ans+=mergesort(mid+1,high,nums);
        ans+=merge(low,mid,high,nums);
        return ans;
}
    int reversePairs(vector<int>& nums) {
       return mergesort(0,nums.size()-1,nums); 
    }
};