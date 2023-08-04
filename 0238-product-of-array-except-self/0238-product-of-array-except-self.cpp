class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>rt(n,1);
 int lt=1;
        for(int j=n-2;j>=0;j--)
        {
            rt[j]=rt[j+1]*nums[j+1];
}
        for(int k=0;k<n;k++){
            rt[k]=rt[k]*lt;
        lt=lt*nums[k];
        }
     return rt;
    }
};