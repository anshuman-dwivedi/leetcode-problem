class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       vector<vector<int>>res(n,vector<int>(n));
        int rs=0,re=n-1;
        int cs=0,ce=n-1;
        int val=0;
        while(rs<=re && cs<=ce)
        {
    for(int i=cs;i<=ce;i++)
    {
    res[rs][i]=++val;    
}
             for(int i=rs+1;i<=re;i++)
    {
    res[i][ce]=++val;    
}
            if(rs < re && cs < ce)
            {
                for(int i = ce-1; i>cs; --i)
                    res[re][i] = ++val;
					for(int i = re; i>rs; --i) 
                    res[i][cs] = ++val;
            }
            ++rs;
            --re;
            ++cs;
            --ce;
        }
        return res;
            
    }
};