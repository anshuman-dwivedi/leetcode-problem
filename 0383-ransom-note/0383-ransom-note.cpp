class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>m;
        int count=0;
        for(int i=0;i<ransomNote.length();i++)
        {
            m[ransomNote[i]]++;
}
        for(int i=0;i<magazine.length();i++)
        {
            if(m.find(magazine[i])!=m.end())
            {
                m[magazine[i]]--;
}
}
        for(auto x:m)
        {
            if(x.second<=0)
                count++;
}
        return count==m.size();
        
    }
};