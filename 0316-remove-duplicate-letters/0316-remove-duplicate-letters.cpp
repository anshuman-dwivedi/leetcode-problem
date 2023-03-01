class Solution {
public:
    string removeDuplicateLetters(string s) {
 vector<int>li(26,0);
        vector<bool>vis(26,false);
        for(int i=0;i<s.length();i++)
        {
       li[s[i]-'a']=i;    
}
    stack<char>st;
        for(int i=0;i<s.length();i++)
        {
        int indx=s[i]-'a';
            if(vis[indx])
                continue;
            while(!st.empty() && st.top()>s[i] && i<li[st.top()-'a'])
            {
        vis[st.top()-'a']=false;
                st.pop();
}
            st.push(s[i]);
            vis[indx]=true;
}
        string wd;
        while(!st.empty())
        {
            wd=st.top()+wd;
            st.pop();
}
        return wd;
    }
};