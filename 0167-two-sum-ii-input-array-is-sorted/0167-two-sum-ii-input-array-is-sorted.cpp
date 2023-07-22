class Solution {
public:
    int binarysearch(vector<int>& nums,int low,int high,int k)
    {
     while(low<=high)
     {
         int mid=low+(high-low)/2;
         if(nums[mid]==k)
         return mid;
         else if(nums[mid]>k)
         {
             high=mid-1;
         }
         else
         low=mid+1;
     }
     return -1;
    }  
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>result;
        for(int i=0;i<numbers.size();i++)
        {
            int low=i+1;
            int high=numbers.size()-1;
            int check=target-numbers[i];
            int ans=binarysearch(numbers,low,high,check);
            if(ans!=-1 ){
                result.push_back(i+1);
                result.push_back(ans+1);
}
                
}
  return result;      
    }
};