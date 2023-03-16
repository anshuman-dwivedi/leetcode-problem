class Solution {
public:
    int findMaxLength(vector<int>& arr) {
         map<int,int>m;
        int sum=0,len=0,ans=INT_MIN,len1=0;
        for(int i=0;i<arr.size();i++)
        {
        arr[i]=(arr[i]==0)?-1:1;
        }
        for(int i=0;i<arr.size();i++)
        {
            sum=sum+arr[i];
            if(sum==0)
            {
                len1=i+1;
            }
            if(m.find(sum)!=m.end())
            {
           int index=m[sum];
            len=i-index;
           ans=max(ans,len);
        }
            else{
                m.insert({sum,i});
            }
        }
        ans=max(ans,len1);
return ans;
    }
};