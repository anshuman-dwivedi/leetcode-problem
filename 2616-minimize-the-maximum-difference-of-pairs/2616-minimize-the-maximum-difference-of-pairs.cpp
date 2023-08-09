class Solution {
public:
    bool isvalid(vector<int> nums,int mid,int p)
    {
int count=0;
        for(int i=0;i<nums.size()-1;)
        {
         if(nums[i+1]-nums[i]<=mid && count<=p)
         {
             count++;
             i+=2;
}
            else
                i+=1;
}
        return count>=p;
}
    int minimizeMax(vector<int>& nums, int p) {
       int low=0;
        sort(nums.begin(),nums.end());
        int high=nums.back()-nums.front();
       while(low<high)
       {
           int mid=low+(high-low)/2;
           if(isvalid(nums,mid,p))
               high=mid;
           else
               low=mid+1;
}
        return low;
    }
};