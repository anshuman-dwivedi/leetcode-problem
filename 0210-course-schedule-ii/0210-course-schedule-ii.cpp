class Solution {
public:
vector<int> findOrder(int N, vector<vector<int>>& pre) {
    vector<int>topo;
    int s=pre.size();
     vector<int>adj[N];
    for(auto it:pre)
    {
     adj[it[1]].push_back(it[0]);
}
 vector<int>ind(N,0);
 for(int i=0;i<N;i++)
 {
     for(auto it:adj[i])
     ind[it]++;
}
    queue<int>q;
 for(int i=0;i<N;i++)
 {
     if(ind[i]==0)
         q.push(i);
}
    while(!q.empty())
    {
        int temp=q.front();
        topo.push_back(temp);
        q.pop();
        for(auto it:adj[temp])
        {
            ind[it]--;
            if(ind[it]==0)
                q.push(it);
}
}
    if (topo.size() == N) return topo;
		return {};
}};