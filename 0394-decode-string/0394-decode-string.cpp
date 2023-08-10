class Solution {
public:
    string decodeString(string s) {
     stack<char>st;
        string wd;
        for(int i=0;i<s.length();i++)
        {
        if(s[i]==']')
        {
            string temp;
            while(!st.empty() && st.top()!='[')
            {
                temp=st.top()+temp;
                st.pop();
                }
            if(!st.empty() && st.top()=='[')
                st.pop();
            string no;
            while(!st.empty() && (st.top()>=48 && st.top()<=57))
            {
             no=st.top()+no;
                st.pop();
}
            int nos=stoi(no);
            for(int i=0;i<nos;i++)
            {
                wd+=temp;
}
                    for(int i=0;i<wd.length();i++)
            {
             st.push(wd[i]);
}
       
            wd="";
}
            else
                st.push(s[i]);
}
        while(!st.empty())
        {
            wd=st.top()+wd;
            st.pop();
}
        return wd;
    }
};