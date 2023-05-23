class Solution {
public:
    int helper(int n,vector<int>& arr)
    {
          if(n==1 || n==2)
            return n;
      if(arr[n]!=-1)
          return arr[n];
        arr[n]=helper(n-1,arr)+helper(n-2,arr);
        
        return arr[n];
}
    int climbStairs(int n) {
      vector<int>vec(n+1,-1);
        int count=helper(n,vec);
    return count;
    }
};