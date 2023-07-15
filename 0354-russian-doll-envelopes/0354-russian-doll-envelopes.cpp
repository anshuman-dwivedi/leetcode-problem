class Solution {
public:
    static bool compare(vector<int>& a,vector<int>& b)
    {
        if(a[0]==b[0])
            return a[1]>b[1];
        return a[0]<b[0];
}
    int maxEnvelopes(vector<vector<int>>& e) {
     sort(e.begin(),e.end(),compare);
        int n=e.size();
        vector<int>output;
        for(int i=0;i<n;i++)
        {int ele=e[i][1];
         int idx=lower_bound(output.begin(),output.end(),ele)-output.begin();
             if(idx>=output.size())
             {
                 output.push_back(ele);
                 
                 
}
         else
        output[idx]=ele;
}
        return output.size();
    }
};