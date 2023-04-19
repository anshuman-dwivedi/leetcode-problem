class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      vector<vector<int>> ans;
    int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            long long tr=(long)(long(target-nums[i])-nums[j]);
            int f=j+1;
            int b=n-1;
            while(f<b){
                int sum=nums[f]+nums[b];
                if(sum<tr)
                    f++;
                else if(sum>tr)
                    b--;
                else{
                     vector<int>temp;
                     temp.push_back(nums[i]);
                     temp.push_back(nums[j]);
                     temp.push_back(nums[f]);
                     temp.push_back(nums[b]);
                     ans.push_back(temp);
                    while(f<b && temp[2]==nums[f])++f;
                    
                    while(f<b && temp[3]==nums[b])--b;
                            
                }
            }
            while(j+1<n && nums[j+1] == nums[j])++j;
        }
        while(i+1<n && nums[i+1] == nums[i])++i;
    }
    return ans;
    }
};