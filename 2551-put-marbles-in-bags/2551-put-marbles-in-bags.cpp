class Solution {
public:
    long long putMarbles(vector<int>& w, int k) {
     vector<int>vec;
        int n=w.size();
        long long sum=0, sum1=0;
        for(int i=0;i<w.size()-1;i++)
        {
            vec.push_back(w[i]+w[i+1]);
}
        sort(vec.begin(),vec.end());
        for(int i=0;i<k-1;i++)
        {
         sum+=vec[i];
            sum1+=vec[n-2-i];
}
        return sum1-sum;
    }
};