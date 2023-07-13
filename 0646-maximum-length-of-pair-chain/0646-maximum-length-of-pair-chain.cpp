class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int n=pairs.size();
              vector<int>output(n,1);
        int maxi=1;
        sort(pairs.begin(),pairs.end());
        for(int i=1;i<n;i++)
        {
    for(int j=i-1;j>=0;j--)
    {
      if(pairs[i][0]<=pairs[j][1])
          continue;
        int possibleans=output[j]+1;
        if(possibleans>output[i])
            output[i]=possibleans;
}
            maxi=max(maxi,output[i]);
}
 return maxi;
    }
};