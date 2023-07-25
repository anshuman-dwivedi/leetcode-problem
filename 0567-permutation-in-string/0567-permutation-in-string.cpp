class Solution {
public:
    bool checkInclusion(string s1, string s2) {
 unordered_map<char,int>mp;
        for(auto it:s1)
            mp[it]++;
        int i=0,j=0,count=mp.size();
        int n=s2.length(),t=s1.length();
        while(j<n)
        {
            if(mp.find(s2[j])!=mp.end())
            {
                mp[s2[j]]--;
                if(mp[s2[j]]==0)
                      count--;
}
            if(j-i+1<t)
                j++;
                
else if(j-i+1==t)
{
    if(count==0)
        return true;
   if(mp.find(s2[i])!=mp.end())
    {
        mp[s2[i]]++;
        if(mp[s2[i]]==1)
            count++;
    
}
     i++;
    j++;
           
}
            
}
                      return false;
    }
};  