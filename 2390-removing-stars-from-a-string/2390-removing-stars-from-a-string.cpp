class Solution {
public:
    string removeStars(string s) {
      string wd="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                wd.pop_back();
            }else{
                wd+=s[i];
            }
            
        }
        return wd;
    }
};