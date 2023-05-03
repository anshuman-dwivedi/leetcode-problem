class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& num1, vector<int>& num2) {
       unordered_set<int>s;
        unordered_set<int>s1;
        vector<vector<int>>res;
        vector<int>ans;
        vector<int>ans1;
        for(int i=0;i<num2.size();i++)
        {
            s.insert(num2[i]);
}
           for(int i=0;i<num1.size();i++)
        {
      s1.insert(num1[i]);
}
         
        for(int i=0;i<num1.size();i++)
        {
        if(s.find(num1[i])==s.end()){
            ans1.push_back(num1[i]);
            s.insert(num1[i]);
        }}
     for(int i=0;i<num2.size();i++)
        {
    if(s1.find(num2[i])==s.end()){
        ans.push_back(num2[i]);
            s1.insert(num2[i]);
    }
}
        res.push_back(ans1);
        res.push_back(ans);
        return res;
        
    }
};