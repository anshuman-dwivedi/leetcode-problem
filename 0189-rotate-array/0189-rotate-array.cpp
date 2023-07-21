class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>res(n,0);
for(int i=0;i<n;i++)
        {
         res[(k+i)%n]=nums[i];
            
}
        for(int i=0;i<n;i++)
            nums[i]=res[i];
    }
};