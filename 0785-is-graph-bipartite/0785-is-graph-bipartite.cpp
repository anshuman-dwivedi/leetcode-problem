class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
       vector<int>color(n,0);
          
    for(int i=0;i<n;i++)
    {
    if(color[i]!=0)
        continue;
        queue<int>q;
        q.push(i);
        color[i]=1;
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            for(auto it:graph[curr])
            {
                if(color[it]==0)
                {
                    color[it]=-color[curr];
                    q.push(it);
}
                else if(color[it]!= -color[curr])
                    return false;
}
            
}
}
        return true;
    }
};