class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>adj[graph.size()];
        vector<int> indegree(graph.size(),0);
        for(int i=0;i<graph.size();i++)
        {
        for(auto it:graph[i])
        {
            adj[it].push_back(i);
            indegree[i]++;
}
}
        vector<int>ans;
        queue<int>q;
        for(int i=0;i<graph.size();i++)
        {
            if(indegree[i]==0)
                q.push(i);
                
}
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto it: adj[node])
            {indegree[it]--;
                if(indegree[it]==0)
                    q.push(it);
}
}
        sort(ans.begin(),ans.end());
  return ans;      
    }
};