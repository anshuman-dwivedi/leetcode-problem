class Solution {
public:
    int countOrders(int n) {
           long long ans = 1, mod=1e9+7;
    for (int i=1; i<n+1; ++i) ans = ans * i % mod;
    for (int i=1; i<2*n; i+=2) ans = ans * i % mod;
    return ans;
    }
};