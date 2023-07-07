class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size();
    vector<int>ahead(2,0),curr(2,0);
        ahead[0]=ahead[1]=0;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<=1;j++)
            {
                if(j)
                {
                    curr[j]=max(-p[i]+ahead[0],0+ahead[1]);
}
                else
                 curr[j]=max(p[i]+ahead[1],0+ahead[0]);   
}
            ahead=curr;
}
       return ahead[1];
    }
};