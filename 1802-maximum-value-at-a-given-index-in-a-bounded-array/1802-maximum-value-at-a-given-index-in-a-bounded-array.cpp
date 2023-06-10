class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
       int l=1,h=maxSum;
    int er=n-1-index;
        int el=index;
        long long ans=0;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            long long ls=0,rs=0,ele=mid-1;
            if(ele>=er)
            {
                rs=((ele+1)*ele)/2-((ele-er+1)*(ele-er)/2);
}
            else
                rs=((ele+1)*ele)/2+(er-ele);
         if(ele>=el)
            {
                ls=((ele+1)*ele)/2-((ele-el+1)*(ele-el)/2);
}
            else
                ls=((ele+1)*ele)/2+(el-ele);   
        long long sum=rs+ls+mid;
        if(sum<=maxSum)
        {
            ans=mid;
            l=mid+1;
}
        else
            h=mid-1;
        }
        return (int)ans;
    }
};