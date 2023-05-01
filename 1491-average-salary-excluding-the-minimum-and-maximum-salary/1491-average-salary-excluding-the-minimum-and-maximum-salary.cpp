class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<salary.size();i++)
        {
            sum+=salary[i];
            maxi=max(maxi,salary[i]);
            mini=min(mini,salary[i]);
}
        return (sum-(double)(maxi+mini))/(salary.size()-2);
    }
};