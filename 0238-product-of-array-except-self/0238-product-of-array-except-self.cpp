class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>lt(n,1);
        vector<int>rt(n,1);
        vector<int>res(n,1);
        for(int i=1;i<n;i++)
        {
            lt[i]=lt[i-1]*nums[i-1];
}
        for(int j=n-2;j>=0;j--)
        {
            rt[j]=rt[j+1]*nums[j+1];
}
        for(int k=0;k<n;k++)
            res[k]=lt[k]*rt[k];
     return res;
    }
};