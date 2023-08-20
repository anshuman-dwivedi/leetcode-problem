class Solution {
public:
     bool topoSort(vector<int> adj[],vector<int> &topo,vector<int> &deg){
        queue<int> q;
        for(int i=0;i<deg.size();i++){
            if(deg[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            topo.push_back(curr);
            for(int v : adj[curr]){
                deg[v]--;
                if(deg[v]==0){
                    q.push(v);
                }
            }
        }
        return topo.size()==deg.size();
    }
public:
    vector<int> sortItems(int n, int m, vector<int>& group, vector<vector<int>>& beforeItems) {
        int k=m;
        for(auto &itr : group){
            if(itr==-1){
                itr = k++;
            }
        }
        vector<int> id(n,0);
        vector<int> ia[n];
        vector<int> gd(k,0);
        vector<int> ga[k];
        for(int v=0;v<n;v++){
            for(int u : beforeItems[v]){
               ia[u].push_back(v);
                id[v]++;
                if(group[u] != group[v]){
                    ga[group[u]].push_back(group[v]);
                  gd[group[v]]++;
                }
            }
        }
        vector<int> fi,fg;
        bool its=topoSort(ia,fi,id);
        bool grp=topoSort(ga,fg,gd);
        if(its==0 || grp==0) return {};
        unordered_map<int,vector<int>> mp;
        for(int it : fi){
            mp[group[it]].push_back(it);
        }
        vector<int> ans;
        for(int grp : fg){
            vector<int> temp = mp[grp];
            for(auto it : temp){
                ans.push_back(it);
            }
        }
        return ans;
    }
};