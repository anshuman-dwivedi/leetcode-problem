class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int count=0;
        if(n==0)
            return true;
        for(int i=0;i<f.size();i++)
        {
       if(f[i]==0 && (i==f.size()-1 || f[i+1]!=1) && (i==0 || f[i-1]!=1 ))
       {
           count++;
     f[i]=1;
       }
        }
        if(count>=n)
            return true;
        return false;
    }
};