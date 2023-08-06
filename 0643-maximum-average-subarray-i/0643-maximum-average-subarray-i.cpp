class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0.0000;
        double maxi=INT_MIN;
        double sum=0.0;
        int i;
      for( i=0;i<k;i++)
      {
          sum+=nums[i];
}
        avg=sum/k;
        maxi=max(maxi,avg);
        for(i=k;i<nums.size();i++)
        {
        sum-=(nums[i-k]);
            sum+=nums[i];
            cout<<sum<<endl;
            avg=sum/k;
            maxi=max(avg,maxi);
}
        return maxi;
    }
};