class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<unordered_set<int>>adj(n);
        int maxi=0;
       for(const auto it:roads){
                adj[it[0]].insert(it[1]);
                adj[it[1]].insert(it[0]);
}
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                 int net= adj[i].size() + adj[j].size();
                
              
                if (adj[j].count(i)) {
                    --net;
                }
                
               
                maxi = max(maxi, net);
       }}
          return maxi;
    }};