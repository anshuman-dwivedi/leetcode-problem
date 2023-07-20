class Solution {
public:
    int numTilings(int n) {
        vector<long>t(n+1,0);
        vector<long>d(n+1,0);
        int mod=1e9+7;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        d[0]=d[1]=1,d[2]=2;
        t[0]=t[1]=1,t[2]=2;
        for(int i=3;i<=n;i++)
        {
            d[i]=(d[i-1]%mod+d[i-2]%mod+2*t[i-2]%mod)%mod;
            t[i]=(d[i-1]%mod+t[i-1]%mod)%mod;
}
     return d[n]%mod;   
    }
};