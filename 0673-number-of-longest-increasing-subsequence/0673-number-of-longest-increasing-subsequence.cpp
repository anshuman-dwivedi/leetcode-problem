class Solution {
public:
    int findNumberOfLIS(vector<int>& input) {
      int n=input.size();
       vector<int>output(n,1);
         vector<int>cnt(n,1);
     output[0]=1;
        int best=1;
     for(int i=1;i<n;i++)
       {
           for(int j=i-1;j>=0;j--)
           {
               if(input[j]>=input[i])
               {
                   continue;
               }
               if(input[i]>input[j]){
                int possibleans=output[j]+1;
               if(possibleans>output[i])
               {
                   output[i]=possibleans;
                   cnt[i]=cnt[j];
               }
                 else if(possibleans==output[i])
               {
                  cnt[i]+=cnt[j];
}
               }
           }
         best=max(best,output[i]);
       }
        int count=0;
       for(int i=0;i<n;i++)
       {
          if(best==output[i])
              count+=cnt[i];
       }
       return count; 
    }
};