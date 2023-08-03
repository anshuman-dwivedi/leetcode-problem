class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& o) {
       vector<int>temp;
        temp.push_back(o[0]);
          int n=o.size();
        vector<int>res(n,1);
      
        int len=1;
        res[0]=1;
        for(int i=1;i<n;i++)
        {
            if(o[i]>=temp.back())
            {
                temp.push_back(o[i]);
              res[i]=temp.size();
}
            else{
                int ind=upper_bound(temp.begin(),temp.end(),o[i])-temp.begin();
                temp[ind]=o[i];
                res[i]=ind+1;
}           
}
        return res;
    }
};