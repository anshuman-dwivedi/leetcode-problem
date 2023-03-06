class Solution {
public:
    bool checksubs(unordered_map<string,int>m,string pat,int wl)
    {
        for(int j=0;j<pat.size();j+=wl)
        {
        string sub=pat.substr(j,wl);
            if(m.find(sub)!=m.end())
            {
                if(--m[sub]==-1)
                    return false;
            }
                else
                    return false;
}
        return true;
}
    vector<int> findSubstring(string s, vector<string>& words) {
int wl=words[0].size();
        int sl=s.length();
        int n=words.size();
        int tl=n*wl;
        unordered_map<string,int>m;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            m[words[i]]++;
}
    int i=0;
        while(i+tl<=sl)
        {
            string sub=s.substr(i,tl);
            if(checksubs(m,sub,wl))
            {
                ans.push_back(i);
}
i++;
        }
        return ans;
    }
};