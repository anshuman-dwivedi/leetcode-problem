class Solution {
public:
    int minMoves2(vector<int>& a) {
        sort(a.begin(),a.end());
       int start=0;
       int end=a.size()-1;
       int count=0;
       while(start<end)
       {
         count+=abs(a[start]-a[end]);
         start++;
         end--;
       }
       return count;   
    }
};