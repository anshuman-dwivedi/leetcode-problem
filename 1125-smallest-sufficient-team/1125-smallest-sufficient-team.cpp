class Solution {
public:
    vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) {
    int n = req_skills.size();
		unordered_map<int,vector<int>> res; 
        res.reserve(1 << n);   
        res[0]={};
        unordered_map<string,int> mp;
        for(int i=0;i< req_skills.size();i++)
            mp[req_skills[i]]=i;
        
        for(int i=0;i<people.size();i++)
        {
            int curr = 0;
            for(int j=0;j<people[i].size();j++)
                curr|= 1<<mp[people[i][j]];
            
            for(auto it = res.begin();it!=res.end();it++)
            {
                int team = it->first | curr;
                if(res.find(team)==res.end() || res[team].size()>1+res[it->first].size())
                {
                    res[team]=it->second;
                    res[team].push_back(i);
                }       
            }
        }
        return res[(1<<n) -1];     
    }
};