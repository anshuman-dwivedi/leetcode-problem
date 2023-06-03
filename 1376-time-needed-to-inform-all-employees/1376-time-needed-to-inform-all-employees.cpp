class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
      unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            mp[manager[i]].push_back(i);
}
        int ans=0;
        queue<pair<int,int>>q;
        q.push({headID,0});
        while(!q.empty())
        {
            int s=q.size();
            for(int i=0;i<s;i++)
            {
             int h=q.front().first;
                int t=q.front().second;
                q.pop();
                int dur=informTime[h]+t;
                ans=max(dur,ans);
                for(auto itr:mp[h])
                    q.push({itr,dur});
}
}
        return ans;
    }
};