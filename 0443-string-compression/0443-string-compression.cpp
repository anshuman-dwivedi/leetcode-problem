class Solution {
public:
    int compress(vector<char>& chars) {
     vector<char>res;
        chars.push_back('0');
        int n=chars.size();
    int i=0,j=0;
        while(j<n)
        {
            if(chars[i]==chars[j])
            {
               j++;
}
            else
            {
                res.push_back(chars[i]);
                if(j-i>1){
                    int dif=j-i;
                  string p=to_string(dif);
                 for(auto ch :p)
                res.push_back(ch);
                }
               i=j;
}
}
        int k=0;
        for(auto ch:res)
          chars[k++]=ch;  
        return res.size();
    }
}; 