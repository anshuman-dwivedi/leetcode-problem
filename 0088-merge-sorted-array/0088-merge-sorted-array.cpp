class Solution {
public:
    int helper(int gap)
    {
        if(gap<=1)
            return 0;
            return (gap/2)+(gap%2);
}
    void merge(vector<int>& arr1, int n, vector<int>& arr2, int m) {
  int gap = n + m;
        int i=0;
        for(int i = n , j = 0; j < m; i++, j++){
            arr1[i] = arr2[j];
        }
    for (gap = helper(gap); gap > 0; gap = helper(gap))
    {
        for (i = 0; i + gap < n+m; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);
    }
    }
};