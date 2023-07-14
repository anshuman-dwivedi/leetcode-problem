class Solution {
public:
    static bool cmp(string & s1,string & s2)
    {
        return s1.length()<s2.length();
}
    bool compare(string s,string p)
    {
        if(s.size()!=p.size()+1)
            return false;
        int m=s.length();
        int first=0,sec=0;
        while(first<m)
        {
        if(s[first]==p[sec])
        {
            first++;
            sec++;
}
            else
                first++;
}
        if(first==s.size() && sec==p.size())return true;
        return false;
}
    int longestStrChain(vector<string>& words) {
      int n=words.size();
        sort(words.begin(),words.end(),cmp);
    vector<int>output(n,1);
        int maxi=1;
        for(int i=0;i<n;i++)
        {
  for(int j=i-1;j>=0;j--)
  {
      if(compare(words[i],words[j]) && 1+output[j]>output[i])
      {
          output[i]=1+output[j];
}
 maxi=max(output[i],maxi);         
}
}
 return maxi;    
    }
};