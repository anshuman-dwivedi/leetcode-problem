class Solution {
public:
    int findWays(vector<int>&nums, int n , int target){
        vector<vector<int>>dp(n , vector<int>(target+1 , 0));
        if(nums[0] == 0) dp[0][0] = 2;
        else dp[0][0] = 1;

        if(nums[0] != 0 && nums[0] <= target) dp[0][nums[0]] = 1;

        for(int i = 1; i < n; i++){
            for(int tar = 0; tar <= target; tar++){
                int notTake = dp[i-1][tar];
                int Take = 0;
                if(nums[i] <= tar){
                    Take = dp[i-1][tar - nums[i]];
                }

                dp[i][tar] = notTake + Take;
            }
        }
        return dp[n-1][target];
    }
    int counter(vector<int>&nums , int target , int n){
        int tSum = 0;
        for(auto it: nums) tSum += it;
        if(tSum - target < 0 || (tSum - target)%2 != 0) return false;

        return findWays(nums , n , (tSum - target)/2);
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        return counter(nums , target , n);
    }
};