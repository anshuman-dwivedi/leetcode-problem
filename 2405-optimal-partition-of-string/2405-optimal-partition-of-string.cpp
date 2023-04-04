class Solution {
public:
    int partitionString(string s) {
       unordered_map<char,bool>mp;
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(mp.find(s[i])!=mp.end())
            {
                count++;
                mp.clear();
                
}
            mp[s[i]]=true;
}
        return count+1;
    }
};