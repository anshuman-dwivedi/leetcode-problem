class Solution {
public:
    int lengthOfLIS(vector<int>& input) {
        int n=input.size();
       vector<int>temp;
     temp.push_back(input[0]);
        int len=1;
     /*  for(int i=1;i<n;i++)
       {
           output[i]=1;
           for(int j=i-1;j>=0;j--)
           {
               if(input[j]>=input[i])
               {
                   continue;
               }
               int possibleans=output[j]+1;
               if(possibleans>output[i])
               {
                   output[i]=possibleans;
               }
           }
       }
       int best=0;
       for(int i=0;i<n;i++)
       {
           best=max(best,output[i]);
       }
       return best;*/ 
        for(int i=1;i<n;i++)
        {
            if(input[i]>temp.back())
            {
                temp.push_back(input[i]);
                len++;
}
            else
            {
                int ind=lower_bound(temp.begin(),temp.end(),input[i])-temp.begin();
                temp[ind]=input[i];
}
            
}
        return len;
    }
};